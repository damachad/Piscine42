/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:04:11 by damachad          #+#    #+#             */
/*   Updated: 2023/03/29 09:04:43 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strcpy2(char *src, int size)
{
	int	i;
	char	dest[size];

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*strstr(char *str, char *to_find)
{
	int	i; 
	int	j:

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{
	int	i;
	char	*copy;

	i = 0;
	copy = strcpy2(str, strlen(str));
	while (copy[i] != '\0')
	{
		strstr(copy, charset)
}

int	main(int argc, char **argv)
{
	char	**strs;

	if (argc == 3)
	{
		strs = ft_split(argv[1], argv[2]);
	}
}
