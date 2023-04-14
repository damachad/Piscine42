/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:54:47 by damachad          #+#    #+#             */
/*   Updated: 2023/03/14 16:28:50 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_2(int w)
{
	char	e;

	e = w + '0';
	write(1, &e, 1);
}

void	write_comb(int n, int comb[])
{
	int	n_in_arr;

	n_in_arr = 0;
	while (n_in_arr < n)
	{
		write_2(comb[n_in_arr]);
		n_in_arr++;
	}
}

void	ft_print_combn(int n)
{
	int	n_digits[10];
	int	arr_nb;
	int	max;
	int	i;

	i = 0;
	arr_nb = n -1;
	max = 9;
	if ((n <= 0) || (n >= 10))
	{
		return ;
	}
	else
	{
		while (i < arr_nb)
		{
			n_digits[i] = 0;
			i++;
		}
		n_digits[arr_nb] = 1;	
		while (n_digits[arr_nb] <= max)
		{
			write_comb(n, );
			write(1, ", ", 2);
			n_digits[arr_nb]++;
			}
			max--;
		}
		write(1, "\n", 1);
	}
}

int	main(void)
{
	ft_print_combn(3);
}
