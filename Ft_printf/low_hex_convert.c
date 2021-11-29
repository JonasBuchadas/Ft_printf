/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_hex_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:02:27 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/29 13:02:44 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	low_hex_convert(unsigned int n)
{
	char	*str;
	size_t	len;

	str = ft_uitoa_base(n, LOWER_HEXBASE);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
