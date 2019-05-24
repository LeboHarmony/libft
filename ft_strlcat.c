/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:54:27 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/24 15:24:34 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
		dst[k + l];
	return (k + ft_strlen(src));
}

int		main()
{
	char dst[] = "We code";
	char src[] = "Everyday";

	printf("%zu", ft_strlcat(dst, src, 4));
	return (0);
}
