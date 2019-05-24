/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:58:24 by keverett          #+#    #+#             */
/*   Updated: 2019/05/24 13:16:46 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t g;
	size_t d;

	d = ft_strlen(dst);
	i = 0;
	g = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	while (i + g < dstsize - 1 && src[g])
	{
		dst[i + g] = src[g];
		g++;
	}
	if (i + g < dstsize - 1)
	{
		dst[i + g] = '\0';
		return (ft_strlen(dst));
	}
	else
		return (ft_strlen(src) + i);
}
