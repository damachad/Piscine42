/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:28:14 by damachad          #+#    #+#             */
/*   Updated: 2023/03/16 14:44:09 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 97 && str[t] <= 122)
		{
			str[t] = str[t] - 32;
		}
		t++;
	}
	return (str);
}

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str1: %s\n", ft_strupcase(str1));
	printf("str2: %s\n", ft_strupcase(str2));
	printf("str3: %s\n", ft_strupcase(str3));
	return (0);
}
