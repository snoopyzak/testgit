#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
		{
			write(1, "fizzbuzz", 8);
			i += 1;
		}
		else if (i % 4 == 0)
		{
			write(1, "fizz", 4);
			i += 1;
		}
		else if (i % 7 == 0)
		{
			write(1, "buzz", 4);
			i += 1;
		}
		else
		{
			ft_write_number(i);
			i += 1;
		}
		write(1, "\n", 1);
	}
}