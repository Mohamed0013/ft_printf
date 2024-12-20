/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:10:51 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 20:15:04 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_params(char param, va_list args, int *count)
{
	int	res;

	res = 0;
	if (param == 'i' || param == 'd')
		ft_putnbr(va_arg(args, int), count);
	else if (param == 'u')
		ft_putnbrunsigned(va_arg(args, unsigned int), count);
	else if (param == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (param == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (param == 'x' || param == 'X' || param == 'p')
	{
		if (param == 'p')
			ft_puthex(va_arg(args, unsigned long), count);
		else
			ft_printhex(va_arg(args, unsigned int), param, count);
	}
	else if (param == '%')
		ft_putchar('%', count);
	return (*count);
}

static int	ft_checker(const char *format, va_list args, int *count)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			ft_check_params(format[++i], args, count);
		else if (format[i] != '%')
			ft_putchar(format[i], count);
		i++;
	}
	return (*count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	ft_checker(format, args, &count);
	va_end(args);
	return (count);
}
