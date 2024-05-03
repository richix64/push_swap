/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments_d_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:24:16 by rpocater          #+#    #+#             */
/*   Updated: 2023/12/23 14:40:33 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arguments_d_i(int number)
{
	ft_putnbr_fd(number, 1);
	return (ft_decimal_length(number));
}
