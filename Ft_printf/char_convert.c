/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:03:38 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 11:50:19 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	char_convert(const char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}