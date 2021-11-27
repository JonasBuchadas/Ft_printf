/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:28:29 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 11:50:47 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	str_convert(const char *str)
{
	int		len;
	size_t	i;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	i = -1;
	while (str[++i])
		ft_putchar_fd(str[i], 1);
	return (len);
}
