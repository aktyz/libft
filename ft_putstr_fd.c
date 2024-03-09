/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:36:14 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 11:49:05 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t string_size;
	int i;

	string_size = 0;
    i = 0;
	while (s[i] != '\0')
	{
		string_size++;
		i++;
	}
	write(fd, s, string_size);
}