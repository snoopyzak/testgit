/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:55:37 by zakrab            #+#    #+#             */
/*   Updated: 2023/08/26 11:31:22 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char	*str)
{
	char	hex[3];

	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[((unsigned char)*str / 16) % 16];
			hex[1] = "0123456789abcdef"[((unsigned char)*str) % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
