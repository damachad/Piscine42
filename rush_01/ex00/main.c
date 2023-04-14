/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:23:59 by damachad          #+#    #+#             */
/*   Updated: 2023/03/19 14:19:51 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	process_arg(int ent, char **argv, int input[16])
{
	if (ent > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ent % 2 == 0)
	{
		if (argv[1][ent] >= '0' && argv[1][ent] <= '9')
			input[ent / 2] = argv[1][ent] - '0';
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		if (argv[1][ent] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];
	int	entry;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	entry = 0;
	while (argv[1][entry] != '\0')
	{
		if (process_arg(entry, argv, input) == 1)
			return (1);
		entry++;
	}
	if (entry < 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
