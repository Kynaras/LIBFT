/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:55:38 by keverett          #+#    #+#             */
/*   Updated: 2019/05/28 15:47:18 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int st_count(char *s, char c)
{
	size_t i;
	size_t d;
	size_t strings;

	i = 0;
	d = 1;
	strings = 0;
	while (s[i] != '\0')
	{
		if(s[i] != c)
		{
			if (d == 1)
			{
				d = 0;
				strings++;
			}
		}
		if(s[i] == c)
		{
			if (d == 0)
				d = 1;
		}
		i++;
	}
	return(strings);
}	

static int st_array(char *s, char c)
{
		while (s[i] != '\0')
	{
		if(s[i] != c)
		{
			if (d == 1)
			{
				d = 0;
				strings++;
			}
		}
		if(s[i] == c)
		{
			if (d == 0)
				d = 1;
		}
		i++;
	}
}
char **ft_strsplit(char const *s, char c)
{
	size_t i;
	char **arr;

	i = st_count(s, c);

	while (i > 0)
	{
		arr[i] = (char*)malloc( * size of (char));


	*arr = (char**)malloc(st_count(s, c) * sizeof(char *));
}

