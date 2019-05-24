/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:44:55 by keverett          #+#    #+#             */
/*   Updated: 2019/05/24 13:05:58 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*src;
	unsigned char	ch;

	ch = (unsigned char)c;
	src = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return ((char*)s + i);
		else
			i++;
	}
	return (NULL);
}
