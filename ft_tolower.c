/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:27:04 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/21 07:53:13 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_putchar and main, only for testing. Also remove the header
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int		main(void) 
{
	int i = 0;
	char str[] = "LeBo";

	while (str[i])
	{
		ft_putchar(ft_tolower(str[i]));
		i++;
	}
	return (0);
}
