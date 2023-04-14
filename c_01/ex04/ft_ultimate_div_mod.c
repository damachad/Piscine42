/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:13:06 by damachad          #+#    #+#             */
/*   Updated: 2023/03/15 18:17:25 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	n1;
	int	n2;
		
	n1 = 30;
	n2 = 3;
	printf("n1: %d, n2: %d\n", n1, n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("res: %d, rem: %d\n", n1, n2);

}
*/
