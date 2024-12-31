/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:08:21 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/13 17:45:51 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	int		new_len;

	new_len = 0;
	i = 0;
	new_len += ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		new_len += ft_strlen(strs[i]);
		i++;
	}
	ptr = malloc((new_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ptr[0] = '\0';
	while (i < size)
	{
		ptr = ft_strcat(ptr, strs[i]);
		if (i != size - 1)
			ptr = ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
