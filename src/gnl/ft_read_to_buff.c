/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_to_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:02:27 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/07 22:55:44 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_to_buffer(char *buffer, int fd, char end);

char	*ft_read_to_buffer(char *buffer, int fd, char end)
{
	char	*tmp;
	int		bytes;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes = 1;
	if (!tmp)
		return (0);
	while (bytes > 0 && !ft_strchr(buffer, end))
	{
		bytes = read(fd, tmp, BUFFER_SIZE);
		if (bytes == -1)
		{
			if (buffer)
				free(buffer);
			free(tmp);
			return (0);
		}
		if (bytes)
		{
			buffer = ft_strjoin(buffer, tmp);
			ft_bzero(tmp, BUFFER_SIZE);
		}
	}
	free(tmp);
	return (buffer);
}
