/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:28:59 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 20:28:59 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strchr(void)
{
	char	str[14];
	char	c;
	char	*result;

	printf("\nTesting ft_strchr\n");
	strcpy(str, "Hello, World!");
	c = 'W';
	result = ft_strchr(str, c);
	printf("1. Character \'W\' is on\t%s\tposition in %s\n", result, str);
	c = '\0';
	result = ft_strchr(str, c);
	printf("2. Character \'\\0\' is on\t%s\tposition in %s\n", result, str);
	c = 'z';
	result = ft_strchr(str, c);
	printf("2. Character \'z\' is on\t%s\tposition in %s\n", result, str);
	c = 'H';
	result = ft_strchr(str, c);
	printf("2. Character \'H\' is on\t%s\tposition in %s\n", result, str);
}
