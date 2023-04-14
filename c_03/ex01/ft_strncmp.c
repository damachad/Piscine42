/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:18:07 by damachad          #+#    #+#             */
/*   Updated: 2023/03/19 14:56:01 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	unsigned int nb = 10;

	char a[] = "abcdefghijklm";
	char b[] = "abcdufghijklm";
        char c[] = "abcdefghijkln";
        char d[] = "abcdefyhijkll";

	printf("%d\n", ft_strncmp (a, b, nb));
        printf("%d\n", ft_strncmp (c, d, nb));
	printf("%d\n", ft_strncmp (d, a, nb));
}*/
