/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:05:16 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 20:34:16 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill_print_unsigned(unsigned int num, char *buffer, int *count)
{
	int	i;

	i = 0;
	if (num == 0)
	{
		ft_putchar('0', count);
		return (*count);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + 48;
		num /= 10;
	}
	while (i > 0)
		ft_putchar(buffer[--i], count);
	return (*count);
}

int	ft_putnbrunsigned(unsigned int nb, int *count)
{
	char	buffer[11];

	return (ft_fill_print_unsigned(nb, buffer, count));
}
