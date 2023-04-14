/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:15:03 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/11 16:19:59 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_insert_x(int x)
{
	int	n_minus;

	n_minus = x - 2;
	if (x < 2)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('A');
		while (n_minus > 0)
		{
			ft_putchar('B');
			n_minus--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	ft_insert_y(int y, int x)
{
	int	space;
	int	n_minus;

	y = y - 2;
	n_minus = x - 2;
	while (y > 0)
	{
		ft_putchar('B');
		space = n_minus;
		while (space > 0)
		{
			ft_putchar(' ');
			space--;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if ((x && y) > 0)
	{
		ft_insert_x(x);
		if (y > 2)
		{
			ft_insert_y(y, x);
		}
		if (y > 1)
		{
			ft_insert_x(x);
		}
	}
	else
	{
		write(1, "Pls insert only positive numbers\n", 33);
	}
	write(1, "\n", 1);
}
