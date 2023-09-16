/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:35:13 by hmouhib           #+#    #+#             */
/*   Updated: 2023/08/31 16:35:15 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	n = 1;
	while (power != 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
