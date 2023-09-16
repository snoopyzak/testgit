#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)gfgf
	{
		i++;
		str++;
	}

	return (i);
}

int	main(int argc, char *argv[])
{
	write (1, argv[1], ft_strlen(argv[1]));
	return (0);
}