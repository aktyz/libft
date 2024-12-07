/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_char_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:50:46 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/08 00:10:55 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clear_char_array(char ***array)
{
	char	**ptr;

	if (array == NULL || *array == NULL)
		return ;
	ptr = *array;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(*array);
	*array = NULL;
}
