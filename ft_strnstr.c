/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:31:58 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/26 16:57:54 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + 1);
		i++;
	}
	return (NULL);
}

int		main()
{
	const char *haystack = "Foo Bar Baz";
	const char *needle = "Bar";
	char *ptr;

	ptr = ft_strnstr(haystack, needle, 4);
	return (0);
}
