/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:07:19 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/09 14:23:07 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		while (len--)
			a[len] = b[len];
	}
	else
		return (ft_memcpy(a, b, len));
	return (dst);
}
