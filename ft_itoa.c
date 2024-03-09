/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:28:34 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 22:02:52 by zslowian         ###   ########.fr       */
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

	ptr = (char *)malloc(sizeof(char) * 13);
	if (!ptr)
		return (0);
	if (!n)
		return (ft_memcpy(ptr, "0", 2));
	if (n == -2147483648)
		return (ft_memcpy(ptr, "-2147483648", 13));
	n = ft_write_minus(ptr, n);
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
	while (i > 0)
	{
		ft_putchar_fd(ptr[i], 1);
		i--;
	}
	i = 11;
	while (n > 0 && i > 0)
	{
		ptr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	while (i >= 0)
	{
		ptr[i] = '+';
		i--;
	}
	return (ptr);
}

// static char	*ft_print_array_content(char *ptr, size_t size)
// {
// 	char	*s;

// 	s = ptr;
// 	ft_putstr_fd("\nPrinting array content:\n", 1);
// 	while (size > 0)
// 	{
// 		ft_putchar_fd(*s, 1);
// 		s++;
// 		size--;
// 	}
// 	return(ptr);
// }
