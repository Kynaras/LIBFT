/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:43:18 by keverett          #+#    #+#             */
/*   Updated: 2019/05/20 14:21:56 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int i)
{
	if(i >= 0 && i <= 0177)
		return (1);
	else
		return (0);
}