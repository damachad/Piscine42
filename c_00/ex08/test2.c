/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:36 by damachad          #+#    #+#             */
/*   Updated: 2023/03/17 10:32:02 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_dig(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	write_nb(int n, int number[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		write_dig(number[i]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	fin_comb[10]
	int	i;

	i = 0;
	while (i < n)
	{
		comb[i] = i;
		fin_comb[i] = 10 - n + i;
		i++;
	}
	while (comb != fin_comb)
	{
		write_nb(n, comb);
		write(1, ", ", 2);
		iterate_nb(n, comb);
	}
	write_nb(n, comb);
}

void	iterate_nb(int n, int a[])
{
	int	i_f;
	int	i_count;

	i_f = n - 1;
	i_count = 1;
	if (a[n - 1] == 9)
	{
		while (a[i_f] == (10 - i_count))
		{
			i_f--;
			i_count++;
		}
		a[i_f]++;
		while (i_f < (n - 1))
		{
			a[i_f + 1] = a[i_f] + 1;
			i_f++;
		}
	}
	else
	{
		a[n - 1]++;
	}
}

int	main(void)
{
	ft_print_combn(5);
}
