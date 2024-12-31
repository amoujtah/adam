/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujtah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:13:47 by amoujtah          #+#    #+#             */
/*   Updated: 2024/07/06 14:59:03 by amoujtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	if (i < size)
	{
		while (src[j] != '\0' && j < size - i - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (i + len_src);
	}
	else
	{
		return (size + len_src);
	}
}
