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

/*	The strnstr() function locates the first occurrence of the null-termi-
	nated  string little in the string big, where not more than len charac-
	ters are searched.  Characters that appear after a '\0'	character
	are not searched.

	size_t is return type from sizeof operator and represents
	the size of objects in bytes */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_ptr;
	char	*little_ptr;
	size_t	max;

	big_ptr = (char *)big;
	little_ptr = (char *)little;
	max = len;
	if (*little_ptr == '\0')
		return (big_ptr);
	while (*big_ptr != '\0' && len > 0)
	{
		if(*big_ptr == *little_ptr)
		{
			while(*big_ptr == *little_ptr && *big_ptr != '\0' && len > 0)
			{
				big_ptr++;
				little_ptr++;
				len--;
			}
			if (*big_ptr == '\0')
			{
				if (*little_ptr == '\0')
					return (big_ptr - ft_strlen((char *)little));
				else
					return (0);
			}
			else if (*little_ptr == '\0')
				return (big_ptr - ft_strlen((char *)little));
			else
			{
				big_ptr = big_ptr - ft_strlen((char *)little) + 1;
				little_ptr = (char *)little;
				len = max;
			}
		}
	}
	return (0);
}
