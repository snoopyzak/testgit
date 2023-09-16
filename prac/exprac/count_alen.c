#include <stdio.h>

int count_alen(char *str)
{
    int lengthBeforeA = 0;

    while (*str)
	{
        if (*str != 'a')
		{
            // If the current character is not 'a', increment the length before 'a'.
            lengthBeforeA++;
        }
		else
		{
            // If 'a' is found, stop counting.
            break;
        }
        str++; // Move to the next character in the string.
    }

    return lengthBeforeA;
}

int main()
{
    char *inputString = "This is a sample string.";
    int a = count_alen(inputString);
    printf("Length before a: %d\n", a);
    return 0;
}