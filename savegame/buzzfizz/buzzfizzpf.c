#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 4 != 0 && i % 7 != 0)
		{
			printf("%d\n", i);
			i += 1;
		}
		else if (i % 4 == 0)
		{
			write(1, "fizz", 4);
			i += 1;
			write(1, "\n", 1);
		}
		else if (i % 7 == 0)
		{
			write(1, "buzz", 4);
			i += 1;
			write(1, "\n", 1);
		}
		else if (i % 4 == 0 && i % 7 == 0)
		{
			write(1, "fizzbuzz", 8);
			i += 1;
			write(1, "\n", 1);
		}
	}
}

/* 
void ft_putnbr(int	number)
{
	char	*digit;
	int		i = 0;

	if (number > 9)
	{
		*digit = '0' + (number % 10);
		number /= 10;
	}
	write (1, digit, 1);
}
*/