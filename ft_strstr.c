/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:52:16 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/26 16:30:28 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t j;

	i = 0;
	if ((haystack[i] && needle[i]) == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if	(needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

int		main()
{
	const char str[20] = "Hello, how are you?";
	const char searchString[10] = "you";
	char *result;

	result = ft_strstr(str, searchString);
	printf("The substring starting from the given string: %s\n", result);
	return (0);
}
