/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:23:06 by damachad          #+#    #+#             */
/*   Updated: 2023/03/25 15:24:41 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_power(4, 3));
}*/
