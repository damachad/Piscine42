/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:28:15 by damachad          #+#    #+#             */
/*   Updated: 2023/03/26 17:28:38 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * 4);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int	i;
	int	max;
	int	*ptr;
	int	min;

	min = 1;
	max = 9;
	i = 0;
	ptr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", ptr[i]);
		i++;
	}
}*/
