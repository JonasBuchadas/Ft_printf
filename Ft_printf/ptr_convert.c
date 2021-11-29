/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:51:23 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/29 12:21:14 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ptr_convert(void *ptr)
{
	unsigned long	address;
	size_t			len;
	char			*hex;
	char			*prefix;
	char			*str;

	address = (unsigned long) ptr;
	hex = ft_ultoa_base(address, LOWER_HEXBASE);
	prefix = "0x";
	str = ft_strjoin(prefix, hex);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(hex);
	free(str);
	return (len);
}
