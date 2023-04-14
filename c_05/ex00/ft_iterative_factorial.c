/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:31:36 by damachad          #+#    #+#             */
/*   Updated: 2023/03/25 14:01:08 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i < nb)
		{
			fact = fact * (nb - i);
			i++;
		}
		return (fact);
	}
}
/*
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}*/
