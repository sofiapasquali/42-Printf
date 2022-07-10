/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:17:35 by shahn             #+#    #+#             */
/*   Updated: 2022/07/10 04:10:48 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putnbr_un(unsigned int nb);
int		ft_putchar_fd(char c, int fd);
int		ft_puthexptr(unsigned long int adress);
int		ft_putlowerhex(unsigned long int nbr);
int		ft_putupperhex(unsigned long int nbr);
int		ft_puthex(unsigned long int nbr);
int		ft_revstr(char *str);

#endif