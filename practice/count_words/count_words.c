/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:38:10 by damachad          #+#    #+#             */
/*   Updated: 2023/04/17 14:38:24 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_words(const char *s, char delim)
{
	int		n;
	int		i;
	size_t	len;

	n = 0;
	i = 0;
	len = ft_strlen(s);
	if (len == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == delim && s[i + 1] != delim)
			n++;
		i++;
	}
	if (s[0] == delim)
		n--;
	if (s[len - 1] != delim)
		n++;
	return (n);
}

int	main(void)
{
	printf("%d", count_words("___ola_a_todos___r", '_'));
}
