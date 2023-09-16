/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakrab <zakrab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:44:17 by zakrab            #+#    #+#             */
/*   Updated: 2023/09/03 14:36:23 by zakrab           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/*	0 1 2 3 4 5 6
	0 1 1 2 3 5 8 ...
*/

int	ft_fibonacci_recur(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (ft_fibonacci_recur(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_recur(index, 0, 1));
}
