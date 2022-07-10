/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:30:50 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 05:15:26 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int nbr)
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

int	ft_putnbr(int nb)
{
	unsigned int	nbr;
	int				i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		i++;
		nbr = (int)(nb * -1);
	}
	else
		nbr = (int)nb;
	if (nbr >= 10)
	{
		i++;
		ft_putnbr(nbr / 10);
	}
	ft_putchar_fd((char)(nbr % 10 + 48), 1);
	return (ft_nbrlen(nb));
}
