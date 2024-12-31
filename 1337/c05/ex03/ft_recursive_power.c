/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:45:55 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/06 21:10:12 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	som;

	som = 1;
	if (power > 0)
		som = nb * ft_recursive_power(nb, power - 1);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (som);
}
