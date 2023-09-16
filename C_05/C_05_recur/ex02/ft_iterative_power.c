/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <zakrab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:44:03 by zakrab            #+#    #+#             */
/*   Updated: 2023/09/03 14:26:44 by zakrab           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 2;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		nb *= n;
		i++;
	}
	return (nb);
}