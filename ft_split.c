/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:17:37 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/24 16:17:37 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_assign_vars(size_t *i, int *j, int *s);
static void	*ft_free(char **strs, int count);
static int	ft_word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	int		j;
	int		word_start;

	ft_assign_vars(&i, &j, &word_start);
	result = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!result)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && word_start < 0)
			word_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && word_start >= 0)
		{
			ft_strlcpy(result[j], (const char *)s, i - word_start + 1);
			if (!result[j])
				return (ft_free(result, j + 1));
			word_start = -1;
			j++;
		}
		i++;
	}
	return (result);
}

static void	ft_assign_vars(size_t *i, int *j, int *s)
{
	*i = 0;
	*j = 0;
	*s = -1;
}

static void	*ft_free(char **strs, int count)
{
	while (count > 0)
	{
		free(strs[count]);
		count--;
	}
	free(strs);
	return (0);
}

static int	ft_word_count(char const *s, char c)
{
	int	count;
	int	i;
	int	is_word;

	count = 0;
	i = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (count);
}
