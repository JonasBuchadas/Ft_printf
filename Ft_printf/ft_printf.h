/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:33:17 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/29 12:40:40 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOWER_HEXBASE "0123456789abcdef" 
# define UPPER_HEXBASE "0123456789ABCDEF" 

int		ft_printf(const char *format, ...);
int		char_convert(const char c);
int		str_convert(char *str);
int		ptr_convert(void *ptr);
int		dec_convert(int n);
int		int_convert(int n);
int		udec_convert(unsigned int n);
int		low_hex_convert(unsigned int n);
int		upp_hex_convert(unsigned int n);
char	*ft_uitoa(unsigned int n);
char	*ft_uitoa_base(unsigned int n, char *base);
char	*ft_ultoa_base(unsigned long n, char *base);
int		put_percent(void);

#endif
