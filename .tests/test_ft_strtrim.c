/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:36:59 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/23 19:15:07 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strtrim(void)
{
	char	source[66];
	char	set[5];
	char	*result;

	strcpy(source, "++-++jdlfjiojijj+-+-");
	strcpy(set, "+-");
	result = ft_strtrim(source, set);
	printf("\nTesting ft_strtrim\n");
	printf("1. Trimming \"%s\" of set \"%s\" results in \"%s\"\n", source, set,
		result);
	strcpy(source, "87593jdlfjiojijj983");
	strcpy(set, "8753");
	result = ft_strtrim(source, set);
	printf("2. Trimming \"%s\" of set \"%s\" results in \"%s\"\n", source, set,
		result);
	strcpy(source, "");
	strcpy(set, "8753");
	result = ft_strtrim(source, set);
	printf("3. Trimming empty string of set \"%s\" results in \"%s\"\n", set,
		result);
	strcpy(source, "87593jdlfjiojijj983");
	strcpy(set, "");
	result = ft_strtrim(source, set);
	printf("4. Trimming \"%s\" of empty set results in \"%s\"\n", source,
		result);
	strcpy(source, "");
	strcpy(set, "");
	result = ft_strtrim(source, set);
	printf("2. Trimming empty string of empty set results in \"%s\"\n", result);
}
