/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhada-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:16:10 by mhada-la          #+#    #+#             */
/*   Updated: 2023/08/20 15:03:21 by mhada-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_up_down(int n)
{
	int	i;

	i = 0;
	while (i <= n - 1)
	{
		if (i != 0 && i != n - 1)
		{
			ft_putchar('B');
		}
		else if (i == 0)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('C');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i <= y - 1)
	{
		if (i == 0 || i == y - 1)
			ft_up_down(x);
		else
		{
			j = 0;
			while (j <= x - 1)
			{
				if (j == 0 || j == x - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
		}
		i++;
	}
}
