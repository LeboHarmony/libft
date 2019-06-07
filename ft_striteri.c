/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:25:33 by lkebethi          #+#    #+#             */
/*   Updated: 2019/06/07 08:08:55 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
<<<<<<< HEAD
	if (!s)
=======
	if (*s == NULL)
>>>>>>> 4e7dbb3e1ae7805f66dcd8f07cedc0b074a980c9
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
