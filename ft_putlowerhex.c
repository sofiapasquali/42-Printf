/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowerhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:33:19 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 05:15:40 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowerhex(unsigned long int nbr)
{
	char				hex[17];
	int					count;
	unsigned long int	temp;

	temp = 0;
	count = 0;
	if (nbr == 0)
	{
		hex[count] = '0';
		count++;
	}
	while (nbr >= 1)
	{
		temp = (nbr % 16);
		nbr = (nbr / 16);
		if (temp >= 0 && temp <= 9)
			hex[count] = temp + 48;
		else if (temp >= 10 && temp <= 15)
			hex[count] = temp + 87;
		count++;
	}
	hex[count] = '\0';
	count = ft_revstr(hex);
	ft_putstr(hex);
	return (count);
}
