/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:57 by keverett          #+#    #+#             */
/*   Updated: 2019/05/20 10:54:29 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int d)
{
	if (d >= 48 || d <= 57)
		return (1);
	else
		return (0);
}
