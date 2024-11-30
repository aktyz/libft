/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:23:46 by zslowian          #+#    #+#             */
/*   Updated: 2024/11/30 17:36:33 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_split(void)
{
	char	**result;
	char	**tmp;

	printf("\nTesting ft_strchr\n");
	result = ft_split("9 5 33", ' ');
	tmp = result;
	while (*tmp)
	{
		ft_printf("%s\n", *tmp);
		tmp++;
	}
	ft_clear_char_array(&result);
	result = ft_split("", ' ');
	tmp = result;
	ft_clear_char_array(&result);
}
