/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:01:29 by keverett          #+#    #+#             */
/*   Updated: 2019/05/22 14:44:42 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *d;
	const char *s;
	char b[len];

	i = 0;
	d = (char*) dst;
	s = (const char*) src;

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

int main()
{
	char t[] = "Cats and Dogs";
	char t1[100];
//	printf("%s\n", ft_memmove(t1 + 1, t, (strlen(t) + 1)));
	printf("%s\n", memmove(t1 + 1, t, (strlen(t) + 1)));
//	printf("%s\n", ft_memmove(t1 + 1, t, (strlen(t) + 1)));
	printf("%s\n", t1);
	return(0);
}
