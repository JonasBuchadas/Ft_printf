/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:42:05 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/28 10:56:47 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a string representing the 
integer received as an argument. Negative numbers must be handled.
*/

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*create_str(unsigned int n, size_t digits);
static void	ft_revtab(void *tab, size_t size);

char	*ft_uitoa(unsigned int n)
{
	size_t			digits;
	unsigned int	n_dig;
	char			*str;

	digits = 1;
	n_dig = n;
	while (n_dig / 10 != 0)
	{
		digits++;
		n_dig /= 10;
	}
	str = create_str(n, digits);
	return (str);
}

static char	*create_str(unsigned int n, size_t digits)
{
	char			*str;
	size_t			i;

	str = (char *)malloc(sizeof(char) * digits + 1);
	if (!str)
		return (NULL);
	i = -1;
	if (n == 0)
		str[++i] = '0';
	while (n != 0)
	{
		str[++i] = (n % 10) + 48;
		n /= 10;
	}
	str[digits] = '\0';
	ft_revtab(str, digits);
	return (str);
}

static void	ft_revtab(void *tab, size_t size)
{
	size_t	start;
	size_t	end;
	char	temp;

	start = -1;
	end = size;
	while (++start < --end)
	{
		temp = *(char *)(tab + start);
		*(char *)(tab + start) = *(char *)(tab + end);
		*(char *)(tab + end) = temp;
	}
}
