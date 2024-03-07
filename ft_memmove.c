/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:51:34 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/07 20:51:34 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	i = 0;
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (dest_ptr > src_ptr)
	{
		while (n-- > 0)
		{
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
	{
		while (i++ < n)
		{
			dest_ptr[i] = src_ptr[i];
		}
	}
	return (dest);
}
