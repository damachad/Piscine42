/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:33:31 by damachad          #+#    #+#             */
/*   Updated: 2023/03/25 17:33:59 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	long int	y;

	y = 1;
	if (nb == 0)
		return (0);
	while (nb > y * y)
		y++;
	if (nb == y * y)
		return (y);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%i", ft_sqrt(9));
}*/
