#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (*str)
	{
		len++;
		str++;

	}
	return (len);
}

int	main(int argc, char	*argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	char	*inp = argv[1];
	int 	i = 0;
	int 	len = ft_strlen(inp);

	while (i < len)
	{
		if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
			inp[i] = '5';
		else if ((i + 1) % 5 == 0)
			inp[i] = '3';
		else if ((i + 1) % 3 == 0)
		{
			inp[i] = '5';
		}
		i++;
	}
	write (1, inp, len);
	return (0);
}