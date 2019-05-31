/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:17:10 by keverett          #+#    #+#             */
/*   Updated: 2019/05/31 08:17:56 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t i;
	size_t begin;
	size_t end;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return(ft_strcpy((char*)ft_memalloc(2 * sizeof (char)), ""));
	begin = i;
	while(s[i])
		i++;
	i -= 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	end = i;
	return (ft_strncpy((char*)ft_memalloc((end - begin + 1) * sizeof (char) + 1),
			   	(s + begin), end - begin + 1));
}
