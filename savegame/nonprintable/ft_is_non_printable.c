#include <unistd.h>
#include <stdio.h>

/* int	ft_str_is_non_printable(char	*str)
{
	while (*str != '\0')
	{
		if (*str <= 31 || *str == 127)
		{
			write (1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
            write(1, "0123456789abcdef" + (((unsigned char)str[i]) >> 4), 1);
            write(1, "0123456789abcdef" + (((unsigned char)str[i]) & 0x0F), 1);
		}
		i++;
	}
} */

int	ft_str_is_non_printable(char	*str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, str, 1);
			str++;
			continue;
		}
		str++;
	}
	write(1, "\n", 1);
	return 0;
}

int main() {
    char test1[] = "Hello, world!";
    char test2[] = "This is a\ttest\nstring.";
    char test3[] = "Some\x7Fspecial\x01characters.";

    printf("Test 1:\n");
    ft_str_is_non_printable(test1);

    printf("\nTest 2:\n");
    ft_str_is_non_printable(test2);

    printf("\nTest 3:\n");
    ft_str_is_non_printable(test3);

    return 0;
}