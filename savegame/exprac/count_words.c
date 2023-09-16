#include <stdio.h>

int countWords(const char *str)
{
    int wordCount = 0;
    int inWord = 0;  // 0 indicates not in a word, 1 indicates in a word.

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
		{
            // If the current character is a space or newline, mark that we are not in a word.
            inWord = 0;
        }
		else
		{
            // If the current character is not a space and we were not in a word, increment word count.
            if (inWord == 0)
			{
                wordCount++;
                inWord = 1; // Mark that we are now in a word.
            }
        }
        str++; // Move to the next character in the string.
    }

    return wordCount;
}

int main()
{
    const char *inputString = "This is a sample string with 7 words.";
    int words = countWords(inputString);
    printf("Number of words: %d\n", words);
    return 0;
}