/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:04:26 by zakrab            #+#    #+#             */
/*   Updated: 2023/09/06 13:11:56 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlen(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_final_length(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(string, strs[index]);
		string += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		index++;
	}
	*string = '\0';
	return (string - full_length);
}
