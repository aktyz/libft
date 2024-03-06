/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:44:33 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/06 09:44:33 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function concatenate the input string into a
	destination string. If the destination buffer, limited by
	its size, isn't large enough to hold the concatenation,
	the	resulting string is truncated (but it is guaranteed
	to be null-terminated).
	It returns the length of the total string it tried
	to create.

	The function returns the length of the total string
	that it tried to create (as if truncation didn't occur). */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr;

	ptr = dst;
	while (*ptr != '\0')
	{
		ptr++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*ptr = *src;
		ptr++;
		src++;
		size--;
	}
	*ptr = '\0';
	return (ft_strlen(dst));
}
