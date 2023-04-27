/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:56:30 by damachad          #+#    #+#             */
/*   Updated: 2023/03/30 10:59:43 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
int	*init(int tab[])
{
	int	i;

	i = 0;
	while (tab)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
*/
int	char_to_int(char c)
{
	int	n;

	n = c - 48;
	return (n);
}

int	*fill(char *str, int tab[], int a)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		n = char_to_int(str[i]);
		if (tab[n] == a)
			tab[char_to_int(str[i])]++;
		i++;
	}
	return (tab);
}

void	solve(char *str1, char *str2)
{
	int	i;
	int	ascii[128];

	i = 0;
	fill(str1, ascii, 0);
	fill(str2, ascii, 1);
	while (i < 128)
	{
		printf("%d\n", ascii[i]);
		i++;
	}
	i = 0;
	while (str1[i] != '\0' && ascii[char_to_int(str1[i])] == 1)
	{
		write(1, &str1[i], 1);
		i++;
	}
	while (str2[i] != '\0' && ascii[char_to_int(str2[i])] == 1)
	{
		write(1, &str2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
