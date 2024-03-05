/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 08:50:51 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/05 08:50:51 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function copy the input string into a
	destination string. If the destination buffer, limited by
	its size, isn't large enough to hold the copy, the
	resulting string is truncated (but it is guaranteed to be
	null-terminated). It returns the length of the total
	string it tried to create.

	The function returns the length of the total string
	that it tried to create (as if truncation didn't occur). */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*ptr;
	int		i;

	ptr = (char *)src;
	i = 0;
	while (*ptr != '\0' && size > 1)
	{
		dst[i] = *ptr;
		ptr++;
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}
