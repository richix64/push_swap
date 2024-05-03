/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:32:51 by rpocater          #+#    #+#             */
/*   Updated: 2023/01/25 16:38:48 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return ((char *)0);
}
