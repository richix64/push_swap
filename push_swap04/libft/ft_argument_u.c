/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:20:58 by rpocater          #+#    #+#             */
/*   Updated: 2023/12/23 14:40:17 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_unsigned_nbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1);
	else
	{
		ft_put_unsigned_nbr(nbr / 10);
		ft_put_unsigned_nbr(nbr % 10);
	}
}

int	ft_argument_u(unsigned int nbr)
{
	ft_put_unsigned_nbr(nbr);
	return (ft_decimal_length(nbr));
}
