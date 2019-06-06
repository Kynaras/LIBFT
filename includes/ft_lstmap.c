/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:11:16 by keverett          #+#    #+#             */
/*   Updated: 2019/06/06 10:18:55 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *current;
	t_list *new;

	current = lst->next;
	new = f(lst);
	if (new == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (f(current) == NULL)
			return (NULL);
		ft_lstadd(&new, f(current));
		current = current->next;
	}
	return(new);
}

