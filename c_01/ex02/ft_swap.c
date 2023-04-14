/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:17:34 by damachad          #+#    #+#             */
/*   Updated: 2023/03/15 15:19:44 by damachad         ###   ########.fr       */
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
/*
int	main(void)
{
	int	n1;
	int	n2;
	
	n1 = 1;
	n2 = 32;
	printf("n1: %d, n1_address: %p\n", n1, &n1);
	printf("n2: %d, n2_address: %p\n", n2, &n2);
	ft_swap(&n1, &n2);
	printf("n1: %d, n1_address: %p\n", n1, &n1);
	printf("n2: %d, n2_address: %p\n", n2, &n2);
}
*/
