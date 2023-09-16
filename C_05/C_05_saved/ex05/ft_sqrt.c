/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:35:37 by hmouhib           #+#    #+#             */
/*   Updated: 2023/08/31 16:35:39 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_sqrt(int nb)
{
	int	maxsqrti;
	int	i;

	maxsqrti = 46340;
	i = 0;
	while (i <= maxsqrti + 1)
	{
		if (ft_recursive_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}
