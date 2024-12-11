/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_char_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:50:46 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/11 18:27:06 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clear_char_array(char ***arr, int arr_size)
{
	char	**ptr;

	if (arr == NULL || *arr == NULL)
		return ;
	ptr = *arr;
	while (arr_size--)
	{
		if (*ptr != NULL)
			free(*ptr);
		ptr++;
	}
	free(*arr);
	*arr = NULL;
}
