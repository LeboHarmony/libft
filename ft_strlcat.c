/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:54:27 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/05 14:02:52 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t k;
	size_t l;

	k = 0;
	l = 0;
	while (dst[k] && l < size)
		k++;
	while (src[l] && (k + l + 1) < size)
	{
		dst[k + l] = src[l];
		l++;
	}
	if (k != size)
		dst[k + l] = '\0';
	return (k + ft_strlen(src));
}
