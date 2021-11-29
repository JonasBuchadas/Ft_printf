/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:06:55 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 12:11:38 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_placeholder(const char *ph, va_list arg);

int	ft_printf(const char *format, ...)
{
	int		n;
	va_list	arg;

	n = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
			n += print_placeholder(++format, arg);
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (n);
}

static int	print_placeholder(const char *ph, va_list arg)
{
	int		len;

	len = 0;
	if (*ph == '%')
		len += put_percent();
	else if (*ph == 'c')
		len += char_convert(va_arg(arg, int));
	else if (*ph == 's')
		len += str_convert(va_arg(arg, char *));
	else if (*ph == 'p')
		len += ptr_convert(va_arg(arg, void *));
	else if (*ph == 'd')
		len += dec_convert(va_arg(arg, int));
	else if (*ph == 'i')
		len += int_convert(va_arg(arg, int));
	else if (*ph == 'u')
		len += udec_convert(va_arg(arg, unsigned int));
	else if (*ph == 'x')
		len += low_hex_convert(va_arg(arg, int));
	return (len);
}
