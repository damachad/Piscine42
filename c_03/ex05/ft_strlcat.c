/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:31:25 by damachad          #+#    #+#             */
/*   Updated: 2023/03/21 14:03:23 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	total_len;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	total_len = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		total_len = src_len + size;
	else
		total_len = src_len + dest_len;
	while (src[i] != '\0' && i < (size - 1 - dest_len))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

int	main(void)
{
	char	arr1[] = "angola";
	char	arr2[] = "nos";
	unsigned int	res;
	unsigned int	n;
	
	n = 2;
	res = ft_strlcat(arr1, arr2, n);
	printf("%i", res);
}
