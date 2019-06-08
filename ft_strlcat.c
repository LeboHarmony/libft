/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:54:27 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/08 17:04:57 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	k;
	size_t	l;
	size_t	i;

	l = ft_strlen(src);
	k = ft_strlen(dst);
	i = 0;
	if (size <= k)
		return (l + size);
	while (dst[i] != '\0' && (size - 1) > i)
		i++;
	while (src[i] != '\0' && (size - 1) > i)
	{
		dst[i] = src[i];
		i++;
		src++;
	}
	dst[i] = '\0';
	return (k + l);
}
