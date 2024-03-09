# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:46:04 by zslowian          #+#    #+#              #
#    Updated: 2024/03/09 14:28:12 by zslowian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Copy source functions to be tested
cp ../libft.h ./libft.h

cp ../ft_isalpha.c ./ft_isalpha.c
cp ../ft_isdigit.c ./ft_isdigit.c
cp ../ft_isalnum.c ./ft_isalnum.c
cp ../ft_isascii.c ./ft_isascii.c
cp ../ft_isprint.c ./ft_isprint.c
cp ../ft_tolower.c ./ft_tolower.c
cp ../ft_toupper.c ./ft_toupper.c
cp ../ft_strncmp.c ./ft_strncmp.c
cp ../ft_strlen.c ./ft_strlen.c
cp ../ft_strchr.c ./ft_strchr.c
cp ../ft_strrchr.c ./ft_strrchr.c
cp ../ft_strnstr.c ./ft_strnstr.c
cp ../ft_strlcpy.c ./ft_strlcpy.c
cp ../ft_strdup.c ./ft_strdup.c
cp ../ft_strlcat.c ./ft_strlcat.c
cp ../ft_bzero.c ./ft_bzero.c
cp ../ft_memset.c ./ft_memset.c
cp ../ft_memcpy.c ./ft_memcpy.c
cp ../ft_memmove.c ./ft_memmove.c
cp ../ft_memchr.c ./ft_memchr.c
cp ../ft_memcmp.c ./ft_memcmp.c
cp ../ft_putchar_fd.c ./ft_putchar_fd.c
cp ../ft_putstr_fd.c ./ft_putstr_fd.c
cp ../ft_putendl_fd.c ./ft_putendl_fd.c
cp ../ft_putnbr_fd.c ./ft_putnbr_fd.c
cp ../ft_substr.c ./ft_substr.c

# Compile with appropriate flags
cc -Wall -Wextra -Werror *.c -o tests.out

# Run your tests
./tests.out

# Remove files that will be copied/created with the next test run
rm ./libft.h

rm ./ft_tolower.c
rm ./ft_toupper.c
rm ./ft_isalpha.c
rm ./ft_isdigit.c
rm ./ft_isalnum.c
rm ./ft_isascii.c
rm ./ft_isprint.c
rm ./ft_strlen.c
rm ./ft_strchr.c
rm ./ft_strncmp.c
rm ./ft_strrchr.c
rm ./ft_strnstr.c
rm ./ft_strlcpy.c
rm ./ft_strdup.c
rm ./ft_strlcat.c
rm ./ft_bzero.c
rm ./ft_memset.c
rm ./ft_memcpy.c
rm ./ft_memmove.c
rm ./ft_memchr.c
rm ./ft_memcmp.c
rm ./ft_putchar_fd.c
rm ./ft_putstr_fd.c
rm ./ft_putendl_fd.c
rm ./ft_putnbr_fd.c
rm ./ft_substr.c

rm ./tests.out
