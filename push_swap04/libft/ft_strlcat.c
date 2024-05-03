/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:48:01 by rpocater          #+#    #+#             */
/*   Updated: 2023/02/20 16:42:14 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_count;
	unsigned int	src_count;
	size_t			result;

	dst_count = 0;
	while (dst[dst_count] != '\0')
		++dst_count;
	src_count = 0;
	while (src[src_count] != '\0')
		++src_count;
	result = src_count;
	if (dstsize <= dst_count)
		result += dstsize;
	else
		result += dst_count;
	src_count = 0;
	while (src[src_count] != '\0' && dst_count + 1 < dstsize)
	{
		dst[dst_count] = src[src_count];
		dst_count++;
		src_count++;
	}
	dst[dst_count] = '\0';
	return (result);
}
