/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:50:50 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/28 13:11:37 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The atoi() function converts the initial portion of the string pointed to by str
to int representation
*/

static int	readnumbers(const char *str, int i, int signal);
static int	check_signal(char c);
static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int	i;
	int	signal_int;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	signal_int = check_signal(str[i]);
	if (signal_int != 0)
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (readnumbers(str, i, signal_int));
	return (0);
}

static int	readnumbers(const char *str, int i, int signal)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (signal == -1)
		return (result * -1);
	else
		return (result);
}

static int	check_signal(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (-1);
	return (0);
}

static int	ft_isspace(int c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	else
		return (0);
}
