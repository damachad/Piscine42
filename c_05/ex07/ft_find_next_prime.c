/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:34:32 by damachad          #+#    #+#             */
/*   Updated: 2023/03/26 10:34:53 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	f;

	f = 2;
	if (nb < 2)
		return (0);
	while (f < nb)
	{
		if (nb % f == 0)
			return (0);
		f++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	while (nb < 2147483647 && ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%i", ft_find_next_prime(14));
}*/
