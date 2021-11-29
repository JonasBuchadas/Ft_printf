/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:01:54 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/29 13:02:00 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	dec_convert(int n)
{
	char	*str;
	size_t	len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
