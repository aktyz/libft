# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:46:04 by zslowian          #+#    #+#              #
#    Updated: 2024/03/04 21:06:22 by zslowian         ###   ########.fr        #
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

# Compile with appropriate flags
cc -Wall -Wextra -Werror -c *.c -o tests.out

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

rm ./tests.out
