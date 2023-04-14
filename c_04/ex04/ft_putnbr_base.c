/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:11:58 by damachad          #+#    #+#             */
/*   Updated: 2023/03/20 14:10:16 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char	vector;

	vector = *a;
	*a = *b;
	*b = vector;
}

void	ft_rev(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

void	inv(int *ptr)
{
	*ptr *= -1;
}

void	convert_nb(int n, int b, char *nb2)
{
	int	i;
	int	l;
	
	i = 0;
	while (n != 0)
	{
		nb2[i] = n % b +'0';
		n = n / b;
		i++;
	}
	l = ft_strlen(nb2);
	ft_rev(nb2, l);
	nb2[i] = '\0';
}

int	test_base(char *base1, int size)
{
	int	i;
	
	i = 0;
	if (size < 2)
		return (1);
	while (i < size)
	{
		if (base1[i] == '-' || base1[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	a;
	int	i;
	char	nb2[40];
	
	i = 0;
	a = ft_strlen(base);
	if (test_base(base, a) == 1)
		return ;
	if (nbr == 0)
		ft_putchar(base[i]);
	if (nbr < 0)
		inv(&nbr);
	convert_nb(nbr, a, nb2);
	while (nb2[i] != '\0')
	{
		ft_putchar(base[nb2[i] - '0']);
		i++;
	}
}

int	main(void)
{
	int	n;
	char	base[20] = "0123456789ABCDEF";
	
	n = 16;
	ft_putnbr_base(n, base);
}
