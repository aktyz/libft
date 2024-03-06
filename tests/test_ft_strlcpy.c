/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:53 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/05 20:49:53 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strlcpy(void)
{
	char	source[20];
	char	dest[20];
	size_t	result;

	printf("\nTesting ft_strlcpy\n");
	strcpy(source, "My String to copy!!");
	result = ft_strlcpy(dest, source, (size_t) 20);
	printf("1. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
	strcpy(source, "New one");
	result = ft_strlcpy(dest, source, (size_t) 4);
	printf("2. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
	result = ft_strlcpy(dest, source, (size_t) 8);
	printf("3. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
	result = ft_strlcpy(dest, source, (size_t) 0);
	printf("4. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
	strcpy(source, "");
	result = ft_strlcpy(dest, source, (size_t) 20);
	printf("5. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
	result = ft_strlcpy(dest, source, (size_t) 1);
	printf("6. Resulting copy: \"%s\" of lenght: %lu\n", dest, result);
}
