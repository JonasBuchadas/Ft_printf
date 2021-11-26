/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:28:52 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/26 15:58:45 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World\n";
	int 	n1;
	int		n2;

	n1 = ft_printf(str);
	n2 = printf("%s", str);
	printf("N1: %i\tN2: %i\n", n1, n2);

	return (1);
}
