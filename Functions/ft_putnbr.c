/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:55:52 by keverett          #+#    #+#             */
/*   Updated: 2019/06/04 09:55:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int st_malloc(int n)
{
	int size;
	int rem;

	rem = 0;
	size = 0;
	if (n < 0)
	{
		size++;
		n = n * -1;
	}
	if (n == 0)
		size++;
	while(n != 0)
	{
		rem = n % 10;
		n = n/10;
		size++;
	}
	return(size);
}

static void st_string(char *str, int size, int n)
{
	int rem;

	rem = 0;
	str[size] = '\0';
	size--;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		rem = n % 10;
		str[size] = (rem > 9)? (rem-10) + 'a' : rem + '0';
		n = n/10;
		size--;
	}
}

void	ft_putnbr(int n)
{
	size_t size;

	size = st_malloc(n);

	char str[size];

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n == 0)
		ft_putchar('0');
	else
	{
		st_string(str, size, n);
		ft_putstr(str);
	}
}
