/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:02:13 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/29 13:02:15 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	int_convert(int n)
{
	char	*str;
	size_t	len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
