/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:55:32 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/10 14:17:52 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
