/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:11:17 by damachad          #+#    #+#             */
/*   Updated: 2023/06/06 15:11:19 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i <= nbr && begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (begin_list->next == NULL && i != nbr)
		return (NULL);
	return (begin_list);
}
