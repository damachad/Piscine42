/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:14:47 by damachad          #+#    #+#             */
/*   Updated: 2023/03/26 10:15:05 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	f;

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
/*
int	main(void)
{
	printf("%i", ft_is_prime(4));
}*/
