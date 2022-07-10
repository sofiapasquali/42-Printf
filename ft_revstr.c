/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:31:56 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 05:12:02 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_revstr(char *str)
{
	char	swap;
	int		i;
	int		size;
	int		count;

	i = 0;
	swap = 0;
	size = ft_strlen(str) - 1;
	count = size + 1;
	while (i <= size)
	{
		swap = str[i];
		str[i] = str[size];
		str[size] = swap;
		i++;
		size--;
	}
	return (count);
}
