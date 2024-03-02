# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:46:04 by zslowian          #+#    #+#              #
#    Updated: 2024/03/02 12:11:51 by zslowian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Copy source functions to be tested
cp ../ft_isalpha.c ./ft_isalpha.c
cp ../ft_isdigit.c ./ft_isdigit.c

# Compile with appropriate flags
cc -Wall -Wextra -Werror *.c -o tests.out

# Run your tests
./tests.out

# Remove files that will be copied/created with the next test run
rm ./ft_isalpha.c
rm ./ft_isdigit.c
rm ./tests.out
