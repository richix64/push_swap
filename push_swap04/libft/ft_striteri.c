/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:59:25 by rpocater          #+#    #+#             */
/*   Updated: 2023/04/03 18:40:32 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return ;
	while (i < len)
	{
		f(i, s + i);
		i++;
	}
}
