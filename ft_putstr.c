/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:08:54 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/21 18:27:01 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *count)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", count);
		return (-1);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
	return (*count);
}
