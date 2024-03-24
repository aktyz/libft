/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:57:48 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/05 21:57:48 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strdup(void)
{
	char	source[66];
	char	*destination;

	ft_bzero(source, 20);
	printf("\nTesting ft_strdup\n");
	destination = ft_strdup(source);
	printf("1. Duplicating uninitialized string, dest: \"%s\",of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	strcpy(source, "");
	destination = ft_strdup(source);
	printf("2. Empty string dup: \"%s\", of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	strcpy(source, "My string");
	destination = ft_strdup(source);
	printf("3. String duplicate: \"%s\", of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	strcpy(source, "Hello, World!");
	destination = ft_strdup(source);
	printf("4. String duplicate: \"%s\", of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	strcpy(source,
		"This is a longer string to test the function with a larger input.");
	destination = ft_strdup(source);
	printf("5. Empty string dup: \"%s\", of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	free(destination);
}
