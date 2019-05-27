/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:43:39 by keverett          #+#    #+#             */
/*   Updated: 2019/05/27 16:03:03 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_up(char w)
{
	w = w + 1;
	return ('H');
}

char *ft_strmap(char const *s, char (*f)(char))
{
	unsigned int i;
	char *n;

	i = 0;

	while (s[i])
	{
		n = (char*)malloc(i * sizeof(char) + 1);
		n[i] = f(s[i]);
		i++;
	}
	n[i] = '\0';
	return (n);
}

int main()
{
	char const s[] = "Hello";
	printf("%s", ft_strmap(s, ft_up));
	return (0);
}
