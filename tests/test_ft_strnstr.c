/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:47:49 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/04 20:47:49 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strnstr(void)
{
	char	big[14];
	char	little[10];
	char	*result;

	printf("\nTesting ft_strnstr\n");
	strcpy(big, "Hello, world!");
	strcpy(little, "world");
	result = ft_strnstr(big, little, 14);
	printf("1. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 14);
	printf("2. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 5);
	printf("3. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 4);
	printf("4. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 3);
	printf("5. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 2);
	printf("6. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 1);
	printf("7. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 0);
	printf("8. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 13);
	printf("9. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
	strcpy(little, "world!");
	result = ft_strnstr(big, little, 12);
	printf("10. String \"%s\" is on\t%s\tposition in %s\n", little, result, big);
}
