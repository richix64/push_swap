/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:45:21 by rpocater          #+#    #+#             */
/*   Updated: 2023/12/23 14:39:17 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_argument_p(unsigned long address)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!address)
		return (write(1, "0x0", sizeof(char) * 3));
	bytes = write(1, "0x", sizeof(char) * 2);
	num = (char *)malloc(((ft_hex_length(address)) + 1) * sizeof(char));
	while (address)
	{
		num[i] = ft_decimal_converter_to_hex(address % 16, 'x');
		address /= 16;
		i++;
	}
	num[i] = '\0';
	bytes += ft_print_reversed_str(num);
	ft_free_ptr(num);
	return (bytes);
}
