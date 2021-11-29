/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:42:41 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 14:02:33 by jocaetan         ###   ########.fr       */
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

static int	base_check(char *base, size_t len);
static char	*create_str(int n, size_t digits, char *base);
static void	ft_revtab(void *tab, size_t size);

char	*ft_itoa_base(int n, char *base)
{
	size_t	digits;
	int		n_dig;
	char	*str;
	size_t	baselen;

	baselen = ft_strlen(base);
	if (base_check(base, baselen) == 0 || baselen <= 1)
		return (NULL);
	digits = 1;
	n_dig = n;
	while (n_dig / baselen != 0)
	{
		digits++;
		n_dig /= baselen;
	}
	if (n < 0)
		digits++;
	str = create_str(n, digits, base);
	return (str);
}

static int	base_check(char *base, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strchr(base, '-') || ft_strchr(base, '+'))
		return (0);
	i = -1;
	while (++i < len)
	{
		j = i + 1;
		while (++j < len)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

static char	*create_str(int n, size_t digits, char *base)
{
	char			*str;
	size_t			baselen;
	size_t			i;
	unsigned int	un;

	if (n < 0)
		un = n * (-1);
	else
		un = n;
	str = (char *)malloc(sizeof(char) * digits + 1);
	if (!str)
		return (NULL);
	i = -1;
	if (un == 0)
		str[++i] = '0';
	baselen = ft_strlen(base);
	while (un != 0)
	{
		str[++i] = base[un % baselen];
		un /= baselen;
	}
	if (n < 0)
		str[++i] = '-';
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
