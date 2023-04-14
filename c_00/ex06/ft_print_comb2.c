/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:40:18 by damachad          #+#    #+#             */
/*   Updated: 2023/03/13 11:25:41 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_2(int n)
{
	char	entry;

	if (n < 10)
	{
		entry = n + '0';
		write(1, "0", 1);
		write(1, &entry, 1);
	}
	else
	{
		entry = (n / 10) + '0';
		write(1, &entry, 1);
		entry = (n % 10) + '0';
		write(1, &entry, 1);
	}
}

void	ft_print_comb2(void)
{
	int	comb[2];

	comb[0] = 0;
	comb[1] = 1;
	while (comb[0] < 99)
	{
		while (comb[1] < 100)
		{
			write_2(comb[0]);
			write(1, " ", 1);
			write_2(comb[1]);
			if (comb[0] == 98)
			{
				return ;
			}	
			write(1, ", ", 2);
			comb[1]++;
		}
		comb[0]++;
		comb[1] = comb[0] + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
