/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:42:14 by damachad          #+#    #+#             */
/*   Updated: 2023/03/19 10:13:46 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "abcdeefa";
	char s2[] = "abcde";
	char s3[] = "abcdm";
	char s4[] = "abcdd";

	printf("%d\n", ft_strcmp (s1, s2));
        printf("%d\n", ft_strcmp (s1, s3));
	printf("%d\n", ft_strcmp (s1, s4));	
}*/
