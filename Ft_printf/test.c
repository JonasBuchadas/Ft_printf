/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:21:14 by jocaetan          #+#    #+#             */
/*   Updated: 2021/11/26 14:44:36 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char c = 'j';

	printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
	printf("|||%5c|||\n", c);
	printf("|||%5d|||\n", c);
	printf("|||%-5d|||\n", c);
	printf("|||%05d|||\n", c);
	printf("|||%-05d|||\n", c);
	printf("|||%05X|||\n", c);
}