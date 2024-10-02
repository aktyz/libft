/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:12:32 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/08 21:42:25 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isdigit(void)
{
	int	result;

	printf("\nTesting ft_isdigit\n");
	result = ft_isdigit((int) '9');
	printf("1. Character \'9\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((int) 'l');
	printf("2. Character \'l\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((int) 'A');
	printf("3. Character \'A\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((int) 'a');
	printf("4. Character \'a\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((int) ' ');
	printf("5. Character \' \' ft_isdigit result: %d\n", result);
	result = ft_isdigit((int)EOF);
	printf("6. Character \'EOF\' ft_isdigit result: %d\n", result);
}
