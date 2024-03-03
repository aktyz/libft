/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:05:45 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 20:03:53 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);

int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);



#endif
