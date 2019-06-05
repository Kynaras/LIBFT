/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:16:10 by keverett          #+#    #+#             */
/*   Updated: 2019/06/05 07:49:24 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	// Ternary operator. Hopefully it will work :D
	if (s1 == NULL || s2 == NULL)
		return (0);
	return(ft_strcmp(s1, s2) ? 0 : 1);
}
