#include <unistd.h>

int	main(int argc, char	*argv[])
{
	int i = 0;
	
	if (argc == 2)
	{
		char	*str = argv[1];

		while (*str != '\0')
		{
			write (1, str, 1);
			write (1, "   ", 3);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}