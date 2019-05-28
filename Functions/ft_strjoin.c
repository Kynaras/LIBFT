/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:09:14 by keverett          #+#    #+#             */
/*   Updated: 2019/05/28 11:51:36 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *n;
	size_t i;
	size_t j;


	i = 0;
	j = 0;
	n = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	while (s1[i])
	{
		n[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		n[i] = s2[j];
		i++;
		j++;
	}
	n[i] = '\0';
	return (n);
}
