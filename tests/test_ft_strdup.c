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
#include <assert.h>


void	test_ft_strdup(void)
{
	char	source[20];
	char	*destination;

	printf("\nTesting ft_strdup\n");
	destination = ft_strdup(source);
	printf("Duplicating uninitialized string, duplicate: \"%s\",of length: %u\n",
		destination, ft_strlen(destination));
	free(destination);

	strcpy(source, "My string");
	destination = ft_strdup(source);
	printf("1. String duplicate: \"%s\", of length: %u\n", destination, ft_strlen(destination));
	free(destination);

	strcpy(source, "Hello, World!");
	destination = ft_strdup(source);
	assert(destination != NULL);
	assert(strcmp(destination, source) == 0);
	free(destination);

	strcpy(source, "");
	destination = ft_strdup(source);
	assert(destination != NULL);
	assert(strcmp(destination, source) == 0);
	free(destination);

	char src_long_input[] = "This is a longer string to test the function with a larger input.";
	destination = ft_strdup(src_long_input);
	assert(destination != NULL);
	assert(strcmp(destination, src_long_input) == 0);
	free(destination);
}
