/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:19:54 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/06 17:29:06 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb >= 1)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
