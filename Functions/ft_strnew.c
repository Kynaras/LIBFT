/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:41:27 by keverett          #+#    #+#             */
/*   Updated: 2019/05/27 13:47:46 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *c;
	c = (char *)malloc(sizeof (char) * size);
	if (c == NULL)
		return (NULL);
	ft_memset(c, '\0', size + 1);

	return (c);
}

int main()
{
	char *b = ft_strnew(10);
	printf("%s\n", b);
	return (0);
}
	