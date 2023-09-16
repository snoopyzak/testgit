#include <unistd.h>

int	main(int argc, char	*argv[])
{
	char	*inp = argv[1];
	int i = 0;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	while (inp[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write (1, &inp[i], 1);
		}
		else
		{
			write (1, "", 0);
		}
		i++;
	}
	return (0);
}