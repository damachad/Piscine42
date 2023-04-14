/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:34:05 by damachad          #+#    #+#             */
/*   Updated: 2023/03/13 19:01:49 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_dig(int n)
{
	char	e;

	e = n + '0';
	write(1, &e, 1);
}

void	into_array(int it, int nl)
{
	int	digits[10];
	int	n_digit;

	n_digit = 0;
	while (n_digit < it + 1)
	{
		digits[n_digit] = nl % 10;
		n_digit++;
		nl = nl / 10;
	}
	while (it >= 0)
	{
		write_dig(digits[it]);
		it--;
	}
}

void	inv(int *ptr)
{
	*ptr *= -1;
	write(1, "-", 1);
}

void	ft_putnbr(int nb)
{
	int	np;
	int	count;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		into_array(8, 214748364);
		write_dig(8);
		return ;
	}
	if (nb < 0)
		inv(&nb);
	np = nb;
	if (np < 10)
	{
		write_dig(np);
		return ;
	}
	count = 0;
	while (np >= 10)
	{
		np = np / 10;
		count++;
	}
	into_array(count, nb);
}

int	main(void)
{
	ft_putnbr(42);
}
