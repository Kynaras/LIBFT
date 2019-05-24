/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:58:24 by keverett          #+#    #+#             */
/*   Updated: 2019/05/24 10:02:05 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
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

int main()
{
	char *t = "Hello to";
	char *p = " everyone";
	printf("%zu\n", ft_strlcat(t, p, 50));
	//printf("%zu\n", strlcat(t, p, 14));
	printf("%s\n", t);
	return (0);
}
