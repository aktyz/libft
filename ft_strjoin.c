/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/03/13 21:08:49 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/13 21:08:49 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*	Allocates (with malloc(3)) and returns a new string, which is the result
	of the concatenation of ’s1’ and ’s2’. */

static char	*ft_strcpy(char *dest, const char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ptr;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc(len_s1 + len_s2 + 1);
	if (!ptr)
		return (0);
	ft_strcpy(ptr, s1);
	ft_strcpy(ptr + len_s1, s2);
	return (ptr);
}

static char *ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* static int	ft_join_len(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	int		i;
	char	*iterator;
	char	*new_string;

	length = ft_join_len(s1, s2);
	i = 0;
	iterator = (char *)s1;
	new_string = (char *)malloc(sizeof(char) * (length + 1));
	while (*iterator != '\0')
	{
		new_string[i] = *iterator;
		iterator++;
		i++;
	}
	iterator = (char *)s2;
	while (*iterator != '\0')
	{
		new_string[i] = *iterator;
		iterator++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

static int	ft_join_len(char const *s1, char const *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2) + 1);
}
 */