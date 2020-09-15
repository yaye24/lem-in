/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblanc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:23:58 by yaye              #+#    #+#             */
/*   Updated: 2020/01/21 16:23:59 by yaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblanc(int c)
{
	if (c == '\f' || c == '\t' || c == ' ' ||
		c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
