/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:11:00 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/26 14:23:49 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	
	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + 1);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

int		main()
{
	const char str[] = "This is just a String";
	const char ch = 'u';
	char *p;

	p = strchr (str, ch);
	printf("String starting from %c is: %s\n", ch, p);
	return (0);
}
