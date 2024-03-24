/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:56:22 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/07 21:56:22 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_memchr(void)
{
	unsigned char	ptr[20];
	int				c;
	void			*result;
	size_t			size;

	size = 20;
	printf("\nTesting ft_memchr\n");
	c = 'a';
	memcpy((void *) ptr, (void *)"Hello, world!", 14);
	result = ft_memchr(ptr, c, size);
	printf("1. Character \'a\' is on\t%p\tposition in %s\n", result, ptr);
	c = 'H';
	memcpy((void *) ptr, (void *)"Hello, world!", 14);
	result = ft_memchr(ptr, c, size);
	printf("2. Character \'H\' is on\t%p\tposition in %s\n", result, ptr);
	c = '!';
	memcpy((void *) ptr, (void *)"Hello, world!", 14);
	result = ft_memchr(ptr, c, size);
	printf("3. Character \'!\' is on\t%p\tposition in %s\n", result, ptr);
	c = '\0';
	memcpy((void *) ptr, (void *)"Hello, world!", 14);
	result = ft_memchr(ptr, c, size);
	printf("4. Character \'\\0\' is on\t%p\tposition in %s\n", result, ptr);
}
