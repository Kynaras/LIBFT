/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:51:50 by keverett          #+#    #+#             */
/*   Updated: 2019/05/30 15:39:38 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t i;
	size_t start;
	size_t end;
	size_t len;

	i = 0;
	if (s == NULL)
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	start = i;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	end = i;
	len = end - start + 1;
	return ft_strsub(s, (unsigned int)start, len);
}

/*int main()
{
	printf("%s", ft_strtrim(NULL));
	return (0);
}i*/
