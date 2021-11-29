/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:28:52 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/27 14:01:01 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int 	n1;
	int		n2;
	char	c;
	char	*str;

	c = 'A';
	str = "World";
	n1 = ft_printf("Hello World %c\n", c);
	n2 = printf("Hello World %c\n", c);
	n2 = printf("Hello %s\n", str);
	n1 = ft_printf("Hello %s\n", str);
	n2 = printf(" NULL %s NULL\n", NULL);
	n1 = ft_printf(" NULL %s NULL\n", NULL);
	printf("FT: %i\tC: %i\n", n1, n2);
	n1 = ft_printf("Hello %%\n", str);
	n2 = printf("Hello %p\n", str);
	n1 = ft_printf("Hello %p\n", str);
	n2 = printf("Hello %p\n", 0);

	return (1);
}
