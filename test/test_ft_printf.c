	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:43:27 by zslowian          #+#    #+#             */
/*   Updated: 2024/04/03 21:43:27 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	test_char(void);
void	test_percent(void);
void	test_string(void);
void	testPointer(void);
void	test_minus(void);
void	test_single_integer(void);
void	test_dot_category(void);
void	test_minus_category(void);
void	test_space_category(void);
void	test_plus_category(void);

void	test_char(void)
{
	int		o_result;
	int		my_result;

	o_result = printf("My first test case\n");
	my_result = ft_printf("My first test case\n");
	if (o_result != my_result)
	{
		printf("First char test case failed!!!\n\n");
	}
	printf("Character testing completed\n\n");
}

void	test_percent(void)
{
	int		o_result;
	int		my_result;

	o_result = printf("Percent sign %%\n");
	my_result = ft_printf("Percent sign %%\n");
	if (o_result != my_result)
	{
		printf("Percent sign test case failed!!!\n\n");
	}
	printf("Percent sign testing completed\n\n");
}

void	test_string(void)
{
	int		o_result;
	int		my_result;
	char	var[100];

	strcpy(var, "My second test case\n");
	o_result = printf("%s", var);
	strcpy(var, "My second test case\n");
	my_result = ft_printf("%s", var);
	if (o_result != my_result)
	{
		printf("First string test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	my_memset(var, 0, sizeof(var));
	o_result = printf("%s", var);
	my_result = ft_printf("%s", var);
	if (o_result != my_result)
	{
		printf("Second string test case failed -> print out null!!!");
		printf(" Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("String testing completed\n\n");
}

/**
 * Tests to have a look at the run of ft_printf when passing an integer
 * as one of the variadic arguments. Tested with all flags that are elligible
 * to be added on an integer format string
 *
*/
void	test_single_integer(void)
{
	int		o_result;
	int		my_result;
	int	my_integer;

	my_integer = 77;
	o_result = printf("%d\n", my_integer);
	my_result = ft_printf("%d\n", my_integer);
	printf("\n");
	if (o_result != my_result)
	{
		printf("First integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	// Test with padding
    my_integer = 77;
    o_result = printf("%5d\n", my_integer);
    my_result = ft_printf("%5d\n", my_integer);
	printf("\n");
    if (o_result != my_result)
    {
        printf("Padding integer test case failed!!! Numbers printed:\n");
        printf("Official function printed %d chars\n", o_result);
        printf("My function printed %d chars\n\n", my_result);
    }

    // Test with left-justified padding
    my_integer = 77;
    o_result = printf("%-5d\n", my_integer);
    my_result = ft_printf("%-5d\n", my_integer);
	printf("\n");
    if (o_result != my_result)
    {
        printf("Left-justified padding integer test case failed!!! Numbers printed:\n");
        printf("Official function printed %d chars\n", o_result);
        printf("My function printed %d chars\n\n", my_result);
    }

    // Test with zero padding
    my_integer = 77;
    o_result = printf("%05d\n", my_integer);
    my_result = ft_printf("%05d\n", my_integer);
	printf("\n");
    if (o_result != my_result)
    {
        printf("Zero padding integer test case failed!!! Numbers printed:\n");
        printf("Official function printed %d chars\n", o_result);
        printf("My function printed %d chars\n\n", my_result);
    }

    // Test with precision
    my_integer = 77;
    o_result = printf("%.5d\n", my_integer);
    my_result = ft_printf("%.5d\n", my_integer);
	printf("\n");
    if (o_result != my_result)
    {
        printf("Precision integer test case failed!!! Numbers printed:\n");
        printf("Official function printed %d chars\n", o_result);
        printf("My function printed %d chars\n\n", my_result);
    }

    // Test with positive sign
    my_integer = 77;
    o_result = printf("%+d\n", my_integer);
    my_result = ft_printf("%+d\n", my_integer);
	printf("\n");
    if (o_result != my_result)
    {
        printf("Positive sign integer test case failed!!! Numbers printed:\n");
        printf("Official function printed %d chars\n", o_result);
        printf("My function printed %d chars\n\n", my_result);
    }
	// Test with empty precision
	o_result = printf("%+.d\n", my_integer);
	my_result = ft_printf("%+.d\n", my_integer);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Empty precision integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	// Test with precision given as va_arg
	o_result = printf("%.*d\n", 3, my_integer);
	my_result = ft_printf("%.*d\n", 3, my_integer);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Precision given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}

void	testPointer(void)
{
	int	o_result;
	int	my_result;

	o_result = printf(" %p %p \n", (void *)0, (void *)0);
	my_result = ft_printf(" %p %p \n", (void *)0, (void *)0);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Null Pointer given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %p \n", (void *)16);
	my_result = ft_printf(" %p \n", (void *)16);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Pointer = 16 given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	my_result = ft_printf(" %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Pointer = 16 given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %p %p \n", (void *)INT_MIN, (void *)INT_MAX);
	my_result = ft_printf(" %p %p \n", (void *)INT_MIN, (void *)INT_MAX);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Pointer = 16 given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}

void	test_minus(void)
{
	int	o_result;
	int	my_result;

	o_result = printf(" %d \n", -1);
	my_result = ft_printf(" %d \n", -1);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test minus given as va_arg integer test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}

void	test_dot_category(void)
{
	int	o_result;
	int	my_result;

	printf("Testing dot(precision) category\n");
	o_result = printf(" %.s ", "-");
	printf("\n");
	my_result = ft_printf(" %.s ", "-");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}

void	test_minus_category(void)
{
	int	o_result;
	int	my_result;

	printf("Testing minus(left justification) category\n");
	o_result = printf(" %-2s", "");
	printf("\n");
	my_result = ft_printf(" %-2s", "");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 12 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf("%-3s", "");
	printf("\n");
	my_result = ft_printf("%-3s", "");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 13 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %-3s %-4s ", " - ", "");
	printf("\n");
	my_result = ft_printf(" %-3s %-4s ", " - ", "");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 17 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", "");
	printf("\n");
	my_result = ft_printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", "");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 18 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 ");
	printf("\n");
	my_result = ft_printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 ");
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 19 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
}

void	test_space_category(void)
{
	int	o_result;
	int	my_result;

	printf("Testing space (additional space or \"-\" sign) category\n");
	o_result = printf(" % d ", 0);
	printf("\n");
	my_result = ft_printf(" % d ", 0);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 12 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}

void	test_plus_category(void)
{
	int	o_result;
	int	my_result;

	printf("Testing plus (plus or minus sign before every number) category\n");
	o_result = printf(" %+d ", 0);
	printf("\n");
	my_result = ft_printf(" %+d ", 0);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 1 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
	o_result = printf(" %+d ", -1);
	printf("\n");
	my_result = ft_printf(" %+d ", -1);
	printf("\n");
	if (o_result != my_result)
	{
		printf("Test 2 test case failed!!! Numbers printed:\n");
		printf("Official function printed %d chars\n", o_result);
		printf("My function printed %d chars\n\n", my_result);
	}
	printf("\n");
}
