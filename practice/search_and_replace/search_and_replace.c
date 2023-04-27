/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:25:53 by damachad          #+#    #+#             */
/*   Updated: 2023/03/29 09:29:53 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char *search, char *replace)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search[0])
			str[i] = replace[0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "\n", 1);
	else if (argv[2][1] != '\0' || argv[3][1] != '\0')
		write(1, "\n", 1);
	else
		search_and_replace(argv[1], argv[2], argv[3]);
}
