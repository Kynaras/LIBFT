/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:03:35 by keverett          #+#    #+#             */
/*   Updated: 2019/06/05 14:26:14 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*d;
	unsigned const char		*s;
	unsigned char			ch;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned const char*)src;
	ch = (unsigned char)c;
	//if (dst == 0 || src == 0)
	//	return (NULL);
	while (i < n && s[i] != ch)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == ch)
		d[i] = c;
	if (i == n)
		return (NULL);
	else
		return (d + i + 1);
}