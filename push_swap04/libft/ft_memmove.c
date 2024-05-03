/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:12:13 by rpocater          #+#    #+#             */
/*   Updated: 2023/01/18 14:08:13 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*char_dest;
	char	*char_src;

	char_dest = (char *) dst;
	char_src = (char *) src;
	if (dst > src)
	{
		while (len--)
		{
			char_dest[len] = char_src[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
