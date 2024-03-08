/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:29:50 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/04 20:29:50 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*	The strnstr() function locates the first occurrence of the null-termi-
	nated  string little in the string big, where not more than len charac-
	ters are searched.  Characters that appear after a '\0'	character
	are not searched.

	size_t is return type from sizeof operator and represents
	the size of objects in bytes */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		result;
	size_t	size;

	size = ft_strlen((char *)little) + 1;
	if (*little == '\0')
		return ((char *) big);
	while (*big != '\0' && len > 0)
	{
		if (*big == *little)
		{
			result = ft_strncmp(big, little, size);
			if (result >= 0)
				return ((char *) big);
		}
		big++;
		len--;
	}
	return (0);
}
