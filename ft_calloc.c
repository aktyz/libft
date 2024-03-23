/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:26:44 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/23 19:13:45 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates memory for an array of nmemb elements of size size bytes each
	and returns a pointer to the allocated memory. The memory is set to 0.
	If nmemb or size is 0, then calloc() returns either NULL,
	or a unique pointer value that can later be successfully passed to free()

*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)malloc(nmemb * size);
	i = 0;
	if (!ptr)
		return (0);
	while (i < nmemb * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
