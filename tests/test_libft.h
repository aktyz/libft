/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:37:19 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 20:37:19 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include "libft.h"
# include <stdio.h>
# include <string.h>

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);

void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strnstr(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_strdup(void);

void	test_ft_bzero(void);
void	test_ft_memset(void);
void	test_ft_memchr(void);

void	test_ft_putchar_fd(void);
void    test_ft_putstr_fd(void);
void	test_ft_putendl_fd(void);

#endif
