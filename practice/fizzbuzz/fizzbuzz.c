/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:26:03 by damachad          #+#    #+#             */
/*   Updated: 2023/03/29 11:26:49 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writedig(int n)
{
	char	e;

	e = n + 48;
	write(1, &e, 1);
}

void	nb_processing(int n)
{
	int	i;
	int	tab[3];

	i = 0;
	if (n < 10)
	{
		writedig(n);
		write(1, "\n", 1);
	}
	else
	{
		while (n > 0)
		{
			tab[i] = n % 10;
			n = n / 10;
			i++;
		}
		while (i > 0)
		{
			writedig(tab[i - 1]);
			i--;
		}
		write(1, "\n", 1);
	}
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	fizzbuzz(void)
{
	int	a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 != 0)
			putstr("fizz");
		if (a % 5 == 0 && a % 3 != 0)
			putstr("buzz");
		if (a % 3 == 0 && a % 5 == 0)
			putstr("fizzbuzz");
		if (a % 3 != 0 && a % 5 != 0)
			nb_processing(a);
		a++;
	}
}

int	main(void)
{
	fizzbuzz();
}
