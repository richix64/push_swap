/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:50:23 by rpocater          #+#    #+#             */
/*   Updated: 2023/07/06 14:29:13 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		ret = malloc(sizeof(char));
		if (!ret)
			return (0);
		ret[0] = '\0';
		return (ret);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
