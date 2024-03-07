/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:45:56 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/07 20:45:56 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned int	*dest_ptr;
	unsigned int	*src_ptr;

	dest_ptr = (unsigned int *) dest;
	src_ptr = (unsigned int *) src;
	while (n-- > 0)
	{
		*dest_ptr = *src_ptr;
	}
	return (dest);
}
