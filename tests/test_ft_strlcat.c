/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:02:28 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/06 10:02:28 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strlcat(void)
{
	char	source[20];
	char	dest[40];
	char	long_source[49];
	size_t	result;

	printf("\nTesting ft_strlcat\n");
	strcpy(source, "additional string");
	strcpy(dest, "Initial string + ");
	result = ft_strlcat(dest, source, (size_t) 40);
	printf("1. Resulting concat: \"%s\" of lenght: %lu\n", dest, result);
	strcpy(long_source, "different, longer than destination mem allocated");
	strcpy(dest, "Initial string + ");
	result = ft_strlcat(dest, long_source, (size_t) 40);
	printf("2. Resulting concat: \"%s\" of lenght: %lu\n", dest, result);
	ft_bzero(source, 20);
	ft_bzero(dest, 45);
	ft_bzero(long_source, 50);
}
