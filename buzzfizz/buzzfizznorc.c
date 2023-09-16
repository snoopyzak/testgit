#include <unistd.h>

void	ft_putnbr(int	number)
{
	char	digit;
	int		divisor = 1;

	while (divisor * 10 <= number)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = '0' + (number / divisor);
		write (1, &digit, 1);
		number %= divisor;
		divisor /= 10;
	}
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 4 != 0 && i % 7 != 0)
		{
			ft_putnbr(i);
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
		else if (i % 4 == 0 && i % 7 == 0)
		{
			write(1, "fizzbuzz", 8);
			i += 1;
		}
		write(1, "\n", 1);
	}
}