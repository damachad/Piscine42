/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:35:28 by damachad          #+#    #+#             */
/*   Updated: 2023/03/27 09:36:08 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*allocate_str(int size, char **strs, char *sep)
{
	int		i;
	int		strs_l;
	int		sep_l;
	char	*ptr;

	i = 0;
	strs_l = 0;
	sep_l = 0;
	sep_l = ft_strlen(sep);
	while (i < size)
	{
		strs_l += ft_strlen(strs[i]);
		i++;
	}
	ptr = (char *) malloc((((size - 1) * sep_l) + strs_l + 1) * 1);
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		offset;
	char	*concat;

	i = 0;
	offset = 0;
	if (size <= 0)
		return (NULL);
	concat = allocate_str(size, strs, sep);
	while (i < size)
	{
		if (i > 0)
		{
			ft_strcpy(concat + offset, sep);
			offset += ft_strlen(sep);
		}
		ft_strcpy(concat + offset, strs[i]);
		offset += ft_strlen(strs[i]);
		if (i == size - 1)
			concat[offset] = '\0';
		i++;
	}
	return (concat);
}
/*
int	main(void)
{
	char	*strs[] = {"hola", "yo", "soy", "dora",};
	char	*ptr1;

	ptr1 = ft_strjoin(4, strs, ", ");
	if (ptr1 == NULL)
		free(ptr1);
	printf("%s\n", ptr1);
}*/
