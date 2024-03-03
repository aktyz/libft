# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:46:04 by zslowian          #+#    #+#              #
#    Updated: 2024/03/03 19:14:20 by zslowian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Copy source functions to be tested
cp ../libft.h ./libft.h
cp ../ft_isalpha.c ./ft_isalpha.c
cp ../ft_isdigit.c ./ft_isdigit.c
cp ../ft_isalnum.c ./ft_isalnum.c
cp ../ft_isascii.c ./ft_isascii.c
cp ../ft_isprint.c ./ft_isprint.c

# Compile with appropriate flags
cc -Wall -Wextra -Werror *.c -o tests.out

# Run your tests
./tests.out

# Remove files that will be copied/created with the next test run
rm ./libft.h
rm ./ft_isalpha.c
rm ./ft_isdigit.c
rm ./ft_isalnum.c
rm ./ft_isascii.c
rm ./ft_isprint.c
rm ./tests.out
