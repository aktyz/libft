/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:50:51 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/23 18:10:22 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Applies the function 'f' to each character of the string 's',
	and passing its index as first argument to create a new string
	resulting from successive applications of 'f'

	s: the string on which to iterate
	f: the function to apply on each character

	Return NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_strlen((char *)s) + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (0);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
