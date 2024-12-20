/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:10:45 by mohdahma          #+#    #+#             */
/*   Updated: 2024/11/20 18:09:36 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
int		ft_putnbr(int nb, int *count);
int		ft_putstr(char *str, int *count);
void	ft_printhex(unsigned int nb, char in_case, int *count);
int		ft_putnbrunsigned(unsigned int nb, int *count);
void	ft_puthex(unsigned long nb, int *count);

#endif