/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <zakrab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:52:04 by zakrab            #+#    #+#             */
/*   Updated: 2023/09/03 15:31:05 by zakrab           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int	main(void)
{
	int nb = 2147483647;
	int	maxsqrti;
	int	i;

	maxsqrti = 46340;
	i = 0;
	while (i <= maxsqrti + 1)
	{
		if (ft_recursive_power(i, 2) == nb)
			printf("%i", i);
		i++;
	}
	return (0);
}
