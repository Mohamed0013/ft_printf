/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:32:41 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 20:33:57 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_hex_buffer(unsigned long nb, char *buffer)
{
	int		i;
	char	digit;

	i = 0;
	if (nb == 0)
	{
		buffer[i++] = '0';
		return (i);
	}
	while (nb > 0)
	{
		if ((nb % 16) < 10)
			digit = (nb % 16) + 48;
		else
			digit = (nb % 16) + 87;
		buffer[i++] = digit;
		nb /= 16;
	}
	return (i);
}

void	ft_puthex(unsigned long nb, int *count)
{
	char	buffer[17];
	int		i;
	int		digits;

	ft_putstr("0x", count);
	digits = ft_fill_hex_buffer(nb, buffer);
	i = digits - 1;
	while (i >= 0)
		ft_putchar(buffer[i--], count);
}
