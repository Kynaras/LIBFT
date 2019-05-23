/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:40:47 by keverett          #+#    #+#             */
/*   Updated: 2019/05/23 09:45:03 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *str = (unsigned char*) b;
	unsigned char a = (unsigned char) c;

	i = 0;

	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (b);
}

int main()
{
	char t[2] = "Hi";
	
	printf("%s", ft_memset(t, 'B', 5));
	return (0);
}
