/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:12:32 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/02 12:23:51 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern int	ft_isdigit(unsigned char c);

void    test_ft_isdigit(void)
{
        int     result;
        //int   original_result;

        printf("\nTesting ft_isdigit\n");
        result = ft_isdigit((unsigned char) '9');
        printf("1. Character \'9\' ft_isdigit result: %d\n", result);
        result = ft_isdigit((unsigned char) 'l');
        printf("2. Character \'l\' ft_isdigit result: %d\n", result);
        result = ft_isdigit((unsigned char) 'A');
        printf("3. Character \'A\' ft_isdigit result: %d\n", result);
        result = ft_isdigit((unsigned char) 'a');
        printf("4. Character \'a\' ft_isdigit result: %d\n", result);
        result = ft_isdigit((unsigned char) ' ');
        printf("5. Character \' \' ft_isdigit result: %d\n", result);
        result = ft_isdigit((unsigned char) EOF);
        printf("6. Character \'EOF\' ft_isdigit result: %d\n", result);
        //original_result = isdigit((unsigned char) 'ę');
        //result = ft_isdigit((unsigned char) 'ę');
        //printf("6. Character \' \' orginal function result: %d\n", original_result);
        //printf("6. Character \' \' my function result: %d\n", result);
}
