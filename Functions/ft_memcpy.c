/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:04:42 by keverett          #+#    #+#             */
/*   Updated: 2019/05/22 13:44:11 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	const char *s = (const char*) src;
	char *d = (char*) dst;

	i = 0;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}