/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:56:44 by damachad          #+#    #+#             */
/*   Updated: 2023/03/21 12:27:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_hex(char a)
{
	ft_putchar("0123456789abcdef"[a / 16]);
	ft_putchar("0123456789abcdef"[a % 16]);
}

void	print_line(char *str)
{
	
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char	*str;

	str = addr;
	i = 0;
	if (size == 0)
		return ;
	while (str[i] != '\0')
	{
		ft_putchar(&str[i]);
		ft_putchar(':');
		ft_putchar(' ');
		i++;
	}
}

int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str));
	return (0);
}
