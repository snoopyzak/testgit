/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:44:24 by zakrab            #+#    #+#             */
/*   Updated: 2023/08/28 09:48:08 by zakrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}
