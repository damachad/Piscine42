/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:42:27 by damachad          #+#    #+#             */
/*   Updated: 2023/03/16 11:31:30 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	vector;

	vector = *a;
	*a = *b;
	*b = vector;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	main(void)
{
	int	a;
	int	size;
	int	arr[6] = {1, 2, 3, 4, 5, 6};

	size = 6;
	a = 0;
	while (a < size)
	{
		printf("%d ", arr[a]);
		a++;
	}
	printf("\n");
	ft_rev_int_tab(arr, size);
	a = 0;
	while (a < size)
	{
		printf("%d ", arr[a]);
		a++;
	}
}
