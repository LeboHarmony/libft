/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:46:13 by lkebethi          #+#    #+#             */
/*   Updated: 2019/05/30 14:09:28 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int		main()
{
	char buffer[80];

	ft_bzero(buffer, 80);
	return (0);
}
