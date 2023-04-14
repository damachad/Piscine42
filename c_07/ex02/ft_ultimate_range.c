/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 08:14:10 by damachad          #+#    #+#             */
/*   Updated: 2023/03/27 08:14:46 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*rep;

	i = 0;
	if (min >= max)
	{
		rep = NULL;
		return (0);
	}
	rep = (int *)malloc((max - min) * 4);
	if (rep == NULL)
		return (-1);
	while (min < max)
	{
		rep[i] = min;
		i++;
		min++;
	}
	*range = rep;
	return (i);
}
/*
int	main(void)
{
	int	*range;

	range = NULL;
	printf("%i", ft_ultimate_range(&range, 1, 9));
}*/
