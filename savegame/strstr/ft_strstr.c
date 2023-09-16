/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:01:23 by zakrab            #+#    #+#             */
/*   Updated: 2023/08/27 10:01:25 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*main_str_ptr;
	char	*sub_str_ptr;

	if (*to_find == '\0')
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		main_str_ptr = str;
		sub_str_ptr = to_find;
		while (*sub_str_ptr != '\0' && *main_str_ptr == *sub_str_ptr)
		{
			main_str_ptr++;
			sub_str_ptr++;
		}
		if (*sub_str_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
