/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:30:21 by rpocater          #+#    #+#             */
/*   Updated: 2023/04/03 18:56:17 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	size_t			i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1) && dstsize > 0)
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (count);
}
