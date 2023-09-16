#include <stdio.h>

void	change(int *i, int *o)
{
	*i = 40;
	*o += 5;
}

int	main(void)
{
	int a = 20;
	int b = 5;

	printf("before:\n");
	printf("\ta: %i | b: %i\n\n", a, b);
	change(&a, &b);
	printf("after:\n");
	printf("\ta: %i | b: %i\n\n", a, b);

}
