/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:03:35 by keverett          #+#    #+#             */
/*   Updated: 2019/05/22 14:48:48 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void* dst, const void *src, int c, size_t n)
{
	size_t i;
	char *d;
	const char *s;
	unsigned char ch;

	i = 0;
	d = (char*) dst;
	s = (const char*) src;
	ch = (unsigned char) c;

	while (i < n && s[i] != ch)
	{
		d[i] = s[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return (dst + i + 1);
}

