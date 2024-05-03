/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:56:10 by rpocater          #+#    #+#             */
/*   Updated: 2023/04/04 17:12:09 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;

	c = malloc(ft_strlen(s1) + 1);
	if (c == 0)
		return (c);
	c = ft_memcpy(c, s1, ft_strlen(s1) + 1);
	return (c);
}
