/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:29:25 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 05:16:00 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag_conversion(const char *format_str, va_list args)
{
	if (*format_str == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (*format_str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format_str == 'p')
		return (ft_puthexptr(va_arg(args, unsigned long int)));
	else if (*format_str == 'd' || *format_str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format_str == 'u')
		return (ft_putnbr_un((va_arg(args, unsigned int))));
	else if (*format_str == 'x')
		return (ft_putlowerhex((va_arg(args, unsigned int))));
	else if (*format_str == 'X')
		return (ft_putupperhex((va_arg(args, unsigned int))));
	else if (*format_str == '%')
		write(1, "%", 1);
	else
		write(1, &format_str, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += flag_conversion(str, args);
			str++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			count++;
			str++;
		}
	}
	va_end(args);
	return (count);
}
