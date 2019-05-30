/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:16:38 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 15:31:45 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int		main()
{
	const char str[] = "http://www.tutorialpoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
