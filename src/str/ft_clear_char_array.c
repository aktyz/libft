/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_char_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:50:46 by zslowian          #+#    #+#             */
/*   Updated: 2024/11/27 09:11:14 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clear_char_array(char ***array)
{
	char **ptr;

	if (array == NULL || *array == NULL)
		return;
	ptr = *array;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(*array);
	*array = NULL;
}
