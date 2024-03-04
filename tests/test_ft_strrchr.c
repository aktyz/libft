/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:09:41 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/04 18:09:41 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strrchr(void)
{
	char	str[14];
	char	c;
	char	*result;

	printf("\nTesting ft_strrchr\n");
	strcpy(str, "Hello, world!");
	c = 'a';
	result = ft_strrchr(str, c);
	printf("1. Character \'a\' is on\t%s\tposition in %s\n", result, str);
	c = 'o';
	result = ft_strrchr(str, c);
	printf("2. Character \'o\' is on\t%s\tposition in %s\n", result, str);
	c = 'z';
	result = ft_strrchr(str, c);
	printf("3. Character \'z\' is on\t%s\tposition in %s\n", result, str);
	c = '\0';
	result = ft_strrchr(str, c);
	printf("4. Character \'\\0\' is on\t%s\tposition in %s\n", result, str);
	c = 'H';
	result = ft_strrchr(str, c);
	printf("4. Character \'H\' is on\t%s\tposition in %s\n", result, str);
}
