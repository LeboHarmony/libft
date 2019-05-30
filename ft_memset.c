/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:00:01 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 08:13:09 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int	c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

int		main()
{
	char str[50] = "WeThinkCode_ is the future of coding in Afrika";

	printf("Before memset(): %s\n", str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After memset(): %s", str);
	return (0);
}
