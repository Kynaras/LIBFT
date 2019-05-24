/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:01:29 by keverett          #+#    #+#             */
/*   Updated: 2019/05/24 12:55:40 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		b[len];

	i = 0;
	d = (char*)dst;
	s = (const char*)src;
	while (i < len)
	{
		b[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = b[i];
		i++;
	}
	return (dst);
}
