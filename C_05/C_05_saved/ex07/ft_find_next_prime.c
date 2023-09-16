/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:35:52 by hmouhib           #+#    #+#             */
/*   Updated: 2023/08/31 16:35:54 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	c;

	if (nb < 2)
		return (0);
	i = 1;
	c = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		i++;
	}
	if (c == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (++nb)
		if (ft_is_prime(nb))
			return (nb);
	return (0);
}
