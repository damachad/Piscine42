/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:07:26 by damachad          #+#    #+#             */
/*   Updated: 2023/03/16 08:36:24 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	vector;

	vector = *a;
	*a = *b;
	*b = vector;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (size > 1)
	{
		while (i < size -1)
		{
			if (tab[i] > tab[i +1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		size--;
	}
}
/*
int	main(void)
{
	int	a;
	int	size;
	int	arr[6] = {1, 6, 3, 2, 7, 6};

	size = 6;
	a = 0;
	while (a < size)
	{
		printf("%d ", arr[a]);
		a++;
	}
	printf("\n");
	ft_sort_int_tab(arr, size);
	a = 0;
	while (a < size)
	{
		printf("%d ", arr[a]);
		a++;
	}
}
*/
