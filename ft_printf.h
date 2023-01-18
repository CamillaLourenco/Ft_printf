/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clourenc  <clourenc@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:23:24 by clourenc          #+#    #+#             */
/*   Updated: 2022/09/08 16:09:34 by clourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		handle_argument_format(const char *str, int count, va_list arg);
int		ft_convert_hex(unsigned long long number, char id);

int		ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putnbr(long int n);
int		ft_putstr(char *s);

#endif