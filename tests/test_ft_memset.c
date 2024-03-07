/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:22:17 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/07 11:22:17 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

/* The below code results in segmentation fault. */

void	test_ft_memset(void)
{
	char	array[25];
	char	*ptr;
	int		i;

	ptr = array;
	ft_bzero(array, 100);
	ft_bzero(ptr, 1);
	printf("\nTesting ft_memset\n");
	strcpy(array, "jkjkjkjkjkjkjkjkjkjkjk\n");
	ft_memset(array, 90, 0);
	printf("\n%s\n", array);
	i = ft_strlen(array);
	ptr = ft_memset(array, 90, i);
	printf("\nResulting memory dump: %s\n", ptr);
	printf("Testing ft_memset ended.\n");
}
