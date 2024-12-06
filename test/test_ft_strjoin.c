/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:32:10 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/06 19:20:25 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strjoin(void)
{
	char	source1[66];
	char	source2[15];
	char	*destination;

	ft_bzero(source1, 66);
	ft_bzero(source2, 15);
	printf("\nTesting ft_strjoin\n");
	strcpy(source1, "First string joined with ");
	strcpy(source2, "second string");
	destination = ft_strjoin(source1, source2);
	printf("1. Joining \"%s\" with \"%s\", dest: \"%s\",of length: %lu\n",
		source1, source2, destination, ft_strlen((const char *)destination));
	free(destination);
	strcpy(source1, "First string joined with ");
	strcpy(source2, "");
	destination = ft_strjoin(source1, source2);
	printf("2. Joining \"%s\" with empty string, dest: \"%s\",of length: %lu\n",
		source1, destination, ft_strlen((const char *)destination));
	free(destination);
	strcpy(source1, "");
	strcpy(source2, "second string");
	destination = ft_strjoin(source1, source2);
	printf("3. Joining empty string with \"%s\", dest: \"%s\",of length: %lu\n",
		source2, destination, ft_strlen((const char *)destination));
	free(destination);
	strcpy(source1, "");
	strcpy(source2, "");
	destination = ft_strjoin(source1, source2);
	printf("4. Joining two empty strings, dest: \"%s\",of length: %lu\n",
		destination, ft_strlen((const char *)destination));
	free(destination);
}
