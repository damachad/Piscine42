/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:54:47 by damachad          #+#    #+#             */
/*   Updated: 2023/03/14 10:45:33 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_2(int w)
{
	char	e;

	if (w < 10)
	{
		e = w + '0';
		write(1, &e, 1);
	}
	else
	{
		e = (w / 10) + '0';
		write(1, &e, 1);
		e = (w % 10) + '0';
		write(1, &e, 1);
	}
}

void	ft_print_combn(int n)
{
	int	n_digits[10];
	int	arr_nb;

	arr_nb = n -1;
	if (n < 0 || n > 10)
	{
		return ;
	}
	else
	{
		n_digits[0] = 0;
		n_digits[1] = 1;
		while (n_digits[0] <= 8)
		{
			while (n_digits[1] <= 9)
			{
				write_2(n_digits[0]);
				write_2(n_digits[1]);
				write(1, ", ", 2);
				n_digits[1]++;
			}
			n_digits[0]++;
			n_digits[1] = n_digits[0] + 1;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
}
