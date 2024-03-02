/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:49:29 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/02 14:20:49 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_ft_isalpha(void)
{
	int	result;

	printf("\nTesting ft_isalpha\n");
	result = ft_isalpha((unsigned char) '9');
	printf("1. Character \'9\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'l');
	printf("2. Character \'l\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'A');
	printf("3. Character \'A\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'a');
	printf("4. Character \'a\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((unsigned char) ' ');
	printf("5. Character \' \' ft_isalpha result: %d\n", result);
	result = ft_isalpha((unsigned char)EOF);
	printf("6. Character \'EOF\' ft_isalpha result: %d\n", result);
}
