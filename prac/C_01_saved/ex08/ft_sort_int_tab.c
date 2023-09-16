/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:21:37 by zakrab            #+#    #+#             */
/*   Updated: 2023/08/20 16:27:33 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	t;

	left = 0;
	while (left < size - 1)
	{
		right = 0;
		while (right < size - left - 1)
		{
			if (tab[right] > tab[right + 1])
			{
				t = tab[right];
				tab[right] = tab[right + 1];
				tab[right + 1] = t;
			}
			right++;
		}
		left++;
	}
}
