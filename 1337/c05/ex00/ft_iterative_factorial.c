/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:10:39 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/06 17:16:23 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
