/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:16:33 by keverett          #+#    #+#             */
/*   Updated: 2019/05/23 16:38:29 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	size_t j;
	char c1;
	
	c1 = (char) c;
	i = 0;


	while (s[i])
		i++;
	while (i >= 0)
	{
		if(s[i] == c)
			return ((char*)s + i);
		i--;
	}
	return(NULL);
}
int main()
{
	printf("%s\n", ft_strchr("Gorgeous George", 'e'));
	printf("%s\n", strchr("Gorgeous George", 'e'));
	return (0);
}
