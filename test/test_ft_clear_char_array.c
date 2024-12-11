/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_clear_char_array.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:50:33 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/11 17:53:11 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_clear_char_array(void)
{
	char	**array;
	char	**ptr;

	printf("\nTesting ft_clear_char_array\n");
	array = ft_split("3 6 22", ' ');
	if (!array)
		return ;
	ft_printf("Before clearing:\n");
	ptr = array;
	while (*ptr)
	{
		ft_printf("%s\n", *ptr);
		ptr++;
	}
	ft_clear_char_array(&array, 3);
	printf("After clearing:\n");
	if (array == NULL)
		printf("Array is NULL\n");
	else
		printf("Array is not NULL\n");
}
