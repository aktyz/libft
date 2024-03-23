/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:12:08 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/23 19:24:40 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

/*
	Converts the initial portion of the string to int representation
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;
	int	result;

	i = 0;
	is_negative = 0;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == 43 && str[i + 1] != 45)
		i++;
	if (str[i] == 45)
	{
		is_negative = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (is_negative)
		result = result * (-1);
	return (result);
}

static int	ft_isspace(int c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	else
		return (0);
}
