/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:52:10 by rpocater          #+#    #+#             */
/*   Updated: 2023/02/20 16:37:57 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	if (!dst && !src)
	{
		return (0);
	}
	char_dest = (char *) dst;
	char_src = (char *) src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dst);
}
