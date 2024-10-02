/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:28:52 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 15:00:40 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_substr(void)
{
	char	s[30];
	char	*ptr;

	strcpy(s, "My awesome text of length 30!");
	printf("\nTesting ft_strrchr\n");
	ptr = ft_substr(s, 0, 30);
	printf("1. The whole string as substring: %s\n", ptr);
	free(ptr);
	ptr = ft_substr(s, 0, 0);
	printf("2. Substring of length zero: %s\n", ptr);
	free(ptr);
	ptr = ft_substr(s, 3, 7);
	printf("3. Awesome substring: %s\n", ptr);
	free(ptr);
	ptr = ft_substr(s, 28, 1);
	printf("4. EXCLAMAITION: %s\n", ptr);
	free(ptr);
	ptr = ft_substr(s, 30, 5);
	printf("5. Out of string index: %s\n", ptr);
	free(ptr);
}
