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
	char	*str;
	char	c;
	char	*result;

	strcpy(str, "Hello, World!");
	c = 'W';
	printf("\nTesting ft_isdigit\n");
	result = ft_strchar(str, c);
	printf("1. Character \'W\' is on %c position in %s\n", result, str);
}
