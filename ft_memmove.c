/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:07:19 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/08 10:56:13 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (a > b)
	{
		while (len--)
		 	b[len] = a[len];
	}
	else
		ft_memcpy(a, b, len);
	return (dst);
}
