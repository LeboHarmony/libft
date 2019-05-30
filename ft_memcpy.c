/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:12:15 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 16:35:42 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while ( i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int		main()
{
	char src[50] = "Code";
	char dst[50] = "World";

	memcpy(dst, src, ft_strlen(src));
	printf("Copied string is %s", dst);
	return (0);
}
