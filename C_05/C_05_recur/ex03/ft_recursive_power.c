/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <zakrab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:44:11 by zakrab            #+#    #+#             */
/*   Updated: 2023/09/03 14:32:41 by zakrab           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/*

func(2, 5, 2) -> func(2, 4, 4) -> func(2, 3, 8) -> func(2, 2, 16) -> func(2, 1, 32) = 32

*/

int	ft_recursive_power_recur(int nb, int power, int n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recur(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recur(nb, power, nb));
}
