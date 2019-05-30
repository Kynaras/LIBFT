/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:49:44 by keverett          #+#    #+#             */
/*   Updated: 2019/05/30 13:46:28 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *n;
	unsigned int i;

	i = 0;

	n = (char*)malloc(len  * sizeof (char) + 1);
	if (n == NULL)
		return (NULL);
	while (i < len)
	{
		n[i] = s[i + start];
		i++;
	}
	n[i] = '\0';
	return (n);
}
