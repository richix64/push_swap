/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:57:04 by rpocater          #+#    #+#             */
/*   Updated: 2023/12/23 14:44:47 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_arguments(va_list arg, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes += ft_argument_percent();
	if (c == 'c')
		bytes += ft_argument_c(va_arg(arg, int));
	if (c == 's')
		bytes += ft_argument_s(va_arg(arg, char *));
	if (c == 'p')
		bytes += ft_argument_p(va_arg(arg, unsigned long));
	if (c == 'd' || c == 'i')
		bytes += ft_arguments_d_i(va_arg(arg, int));
	if (c == 'u')
		bytes += ft_argument_u(va_arg(arg, int));
	if (c == 'x' || c == 'X')
		bytes += ft_arguments_x(va_arg(arg, unsigned int), c);
	return (bytes);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			bytes;

	va_start(args, str);
	bytes = 0;
	while (*str != '\0')
	{
		while (*str != '%')
		{
			if (*str == '\0')
				return (bytes);
			write(1, str, 1);
			bytes++;
			str++;
		}
		str++;
		bytes += ft_check_arguments(args, *str);
		str++;
	}
	va_end(args);
	return (bytes);
}
