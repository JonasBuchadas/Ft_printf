/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:51:23 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 14:18:47 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ptr_convert(void *ptr)
{
	unsigned long	address;
	char			*str;

	address = (unsigned long) ptr;
	str = ft_itoa_base(address, HEXBASE);
	ft_putstr(str);
	return (1);
}
