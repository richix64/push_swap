/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:54:43 by rpocater          #+#    #+#             */
/*   Updated: 2023/12/23 14:40:01 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_argument_s(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (write(1, "(null)", sizeof(char) * 6));
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		len++;
	}
	return (len);
}
