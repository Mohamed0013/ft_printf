/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:09:31 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 18:17:51 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill_print_number(unsigned int num, char *buffer, int *count)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
	{
		ft_putchar(buffer[--i], count);
		res++;
	}
	return (res);
}

int	ft_putnbr(int n, int *count)
{
	char			buffer[11];
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar('-', count);
		num = -n;
	}
	else
		num = n;
	if (num == 0)
	{
		ft_putchar('0', count);
		return (*count);
	}
	return (ft_fill_print_number(num, buffer, count));
}
