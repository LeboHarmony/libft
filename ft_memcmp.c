/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:32:59 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 16:34:02 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

int		main()
{
	char str1[15];
	char str2[15];
	int ret;

	ft_memcpy(str1, "abcdef", 6);
	ft_memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2,5);

	if (ret > 0)
		prinft("str2 is less than str1");
	else if (ret < 0)
		printf("tr1 is less than str2");
	else
		printf("str1 is equal to str2");
	return (0);
}
