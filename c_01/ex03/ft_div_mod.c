/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:21:15 by damachad          #+#    #+#             */
/*   Updated: 2023/03/15 18:11:33 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	n1;
	int	n2;
	int	res;
	int	rem;
	
	n1 = 30;
	n2 = 3;
	ft_div_mod(n1, n2, &res, &rem);
	printf("n1: %d, n2: %d, res: %d, rem: %d", n1, n2, res, rem);

}
*/
