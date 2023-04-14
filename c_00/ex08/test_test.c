/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:44:27 by damachad          #+#    #+#             */
/*   Updated: 2023/03/17 10:46:10 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	number[10];
	int	endnumber[10];
	int	arraybuild;

	arraybuild = 0;
	while (arraybuild < 10)
	{
		number[arraybuild] = 0;
		endnumber[arraybuild] = 0;
		arraybuild = arraybuild + 1;
	}
	ft_start_end_number(n, number, endnumber);
	while (*number != *endnumber)
	{
		writenumber (n, number);
		write(1, ", ", 2);
		iteratenumber(n, number);
	}
	writenumber (n, endnumber);
}

void	ft_start_end_number(int n, int a[], int b[])
{
	int	iteratearray;

	iteratearray = 0;
	while (iteratearray < n)
	{
		a[iteratearray] = iteratearray;
		b[iteratearray] = 10 - n + iteratearray;
		iteratearray = iteratearray + 1;
	}
}

void	writedigit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	writenumber(int n, int number[])
{
	int	iteratearray;

	iteratearray = 0;
	while (iteratearray < n)
	{
		writedigit(number[iteratearray]);
		iteratearray = iteratearray + 1;
	}
}

void	iteratenumber(int n, int a[])
{
	int	iteratearray;
	int	iteratecount;

	iteratearray = n - 1;
	iteratecount = 1;
	if (a[n - 1] == 9)
	{
		while (a[iteratearray] == (10 - iteratecount))
		{
			iteratearray = iteratearray - 1;
			iteratecount = iteratecount + 1;
		}
		a[iteratearray] = a[iteratearray] + 1;
		while (iteratearray < (n - 1))
		{
			a[iteratearray + 1] = a[iteratearray] + 1;
			iteratearray = iteratearray + 1;
		}
	}
	else
	{
		a[n - 1] = a[n - 1] + 1;
	}
}

int	main(void)
{
	ft_print_combn(6);
}
