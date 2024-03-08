/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:10:53 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 19:10:53 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isprint(void)
{
	int	result;

	printf("\nTesting ft_isprint\n");
	result = ft_isprint((int) '9');
	printf("1. Character \'9\' ft_isprint result: %d\n", result);
	result = ft_isprint((int) 'l');
	printf("2. Character \'l\' ft_isprint result: %d\n", result);
	result = ft_isprint((int) 'A');
	printf("3. Character \'A\' ft_isprint result: %d\n", result);
	result = ft_isprint((int) 'a');
	printf("4. Character \'a\' ft_isprint result: %d\n", result);
	result = ft_isprint((int) ' ');
	printf("5. Character \' \' ft_isprint result: %d\n", result);
	result = ft_isprint((int)EOF);
	printf("6. Character \'EOF\' ft_isprint result: %d\n", result);
}
