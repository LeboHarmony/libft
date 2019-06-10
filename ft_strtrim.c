/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:41:34 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/10 13:39:52 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspc(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (i < ft_strlen(s) && ft_isspc(s[i]))
		i++;
	while (j > i && ft_isspc(s[j]))
		j--;
	k = j - i + 1;
	str = ft_strsub(s, i, k);
	return (str);
}
