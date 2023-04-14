/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:39:56 by damachad          #+#    #+#             */
/*   Updated: 2023/03/26 11:40:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char	vector;

	vector = *a;
	*a = *b;
	*b = vector;
}

void	ft_sort(char **str, int size)
{
	int	i;

	i = 1;
	while (size > 2)
	{
		while (i < size - 1)
		{
			if (*str[i] > *str[i + 1])
				ft_swap(str[i], str[i + 1]);
			i++;
		}
		i = 0;
		size--;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argv, argc);
	while (argv[i] != 0)
	{		
		ft_putstr(argv[i]);
		i++;
	}
}
