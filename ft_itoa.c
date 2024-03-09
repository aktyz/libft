/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:28:34 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 16:26:03 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* Allocates with malloc and returns a string representing the integer
received as an argument. Negative numbers must be handled

return value: The string representing the integer
NULL if allocation fails
*/

static int	ft_write_minus(char *ptr, int n);
static char	*ft_nbr_to_str(char *ptr, int n);

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * 12);
	if (!ptr)
		return (0);
	if (n == -2147483648)
		return (ft_memcpy(ptr, "-2147483648", 12));
	n = ft_write_minus(ptr, n);
    printf("\nTranslating %d to number:\n", n);
	ptr = ft_nbr_to_str(ptr, n);
	return (ptr);
}

static int	ft_write_minus(char *ptr, int n)
{
	if (n < 0)
	{
		ptr[0] = '-';
		return (-n);
	}
	else
	{
		ptr[0] = '+';
		return (n);
	}
}

static char	*ft_nbr_to_str(char *ptr, int n)
{
	int	i;

	i = 12;
	ptr[i] = '\0';
	i--;
	while (n > 0 && i > 0)
	{
		ptr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	while (i > 0)
	{
		ptr[i] = '+';
        i--;
	}
	return (ptr);
}
