/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:54:27 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/06 17:52:58 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t k;
	size_t l;

	l = size;
	k = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + k);
	while (*src != 0 && 1 < size)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (k);
}
