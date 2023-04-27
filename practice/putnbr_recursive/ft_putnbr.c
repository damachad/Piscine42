/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:27:18 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/16 13:30:39 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnumb(int x)
{
	if (x < 10)
	{
		ft_putchar(x + 48);
		return ;
	}
	else
		ft_printnumb(x / 10);
	ft_printnumb(x % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_printnumb(nb);
}
/*
int	main(void)
{
	ft_putnbr(42);
}*/
