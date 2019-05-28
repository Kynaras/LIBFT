/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:51:50 by keverett          #+#    #+#             */
/*   Updated: 2019/05/28 13:51:52 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t i;
	size_t start;
	size_t end;
	size_t len;

	i = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	start = i;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	end = i;
	len = end - start + 1;
	return ft_strsub(s, (unsigned int)start, len);
}
