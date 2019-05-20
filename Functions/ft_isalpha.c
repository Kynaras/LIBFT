/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keverett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:00:23 by keverett          #+#    #+#             */
/*   Updated: 2019/05/20 09:49:47 by keverett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}