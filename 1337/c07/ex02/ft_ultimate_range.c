/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:26:07 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/13 17:48:44 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (size);
}
