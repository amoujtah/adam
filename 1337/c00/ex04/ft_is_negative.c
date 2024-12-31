/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:07:02 by amoujtah          #+#    #+#             */
/*   Updated: 2024/06/27 14:19:37 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
