/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:36:15 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 20:34:07 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_hex_buffer(unsigned int nb, char in_case, char *buffer)
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
		else if (in_case == 'X')
			digit = (nb % 16) + 55;
		else
			digit = (nb % 16) + 87;
		buffer[i++] = digit;
		nb /= 16;
	}
	return (i);
}

void	ft_printhex(unsigned int nb, char in_case, int *count)
{
	char	buffer[17];
	int		i;
	int		digits;

	digits = ft_fill_hex_buffer(nb, in_case, buffer);
	i = digits - 1;
	while (i >= 0)
		ft_putchar(buffer[i--], count);
}
