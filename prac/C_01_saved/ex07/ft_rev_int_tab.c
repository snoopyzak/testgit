/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:06:34 by zakrab            #+#    #+#             */
/*   Updated: 2023/08/19 18:42:55 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	t;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		t = tab[left];
		tab[left] = tab[right];
		tab[right] = t;
		left++;
		right--;
	}
}
