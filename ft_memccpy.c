/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:25:22 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 15:06:52 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const char *src, int c, size_t n)
{
	size_t i;
	char *dst2;
	char *src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if ((unsigned char)src2[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}

int		main()
{
	char* msg = "This is the string: not copied";
	char buffer[80];

	ft_memset(buffer, '\0', 80);
	ft_memcpy(buffer, msg, ':', 80);
	printf("%s\n", buffer);
	return (0);
}
