/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:06:55 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/26 15:58:42 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//int	printchar(const char c);
int	print_placeholder(const char *ph, va_list arg);

int	ft_printf(const char *format, ...)
{
	int		n;
	va_list	arg;

	n = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
			n += print_placeholder(format, arg);
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (n);
}

int	print_placeholder(const char *ph, va_list arg)
{
	int	len;

	len = 0;
	if (++(*ph) == 'c')
		len += write(1, (va_arg(arg, int)), 1);
	return (len);
}
