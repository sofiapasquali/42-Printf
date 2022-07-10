/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:50:35 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 05:12:18 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr)
	{
		nbr = (nbr / 10);
		count++;
	}
	return (count);
}

int	ft_putnbr_un(unsigned int nb)
{
	unsigned int	nbr;
	int				i;

	i = 0;
	nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		i++;
	}
	ft_putchar_fd((char)(nbr % 10 + 48), 1);
	return (ft_nbrlen(nb));
}
