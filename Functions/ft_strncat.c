/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:18:58 by keverett          #+#    #+#             */
/*   Updated: 2019/05/21 15:58:57 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (s1[i])
	{
		i++;
	}
	while(s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	
	return s1;
}

int main()
{
	char a[6] = "Hello";
	char d[] = " Worldnewshour";

	printf("%s", strncat(a, d, 8));
	
	return(0);
}
