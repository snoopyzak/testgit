#include <stdio.h>

int countLines(char *str)
{
    int lineCount = 0;
    int inLine = 0;  // 0 indicates not in a word, 1 indicates in a word.

    while (*str) {
        if (*str == '\n') {
            // If the current character is a space or newline, mark that we are not in a word.
            inLine = 0;
        } else {
            // If the current character is not a space and we were not in a word, increment word count.
            if (inLine == 0) {
                lineCount++;
                inLine = 1; // Mark that we are now in a word.
            }
        }
        str++; // Move to the next character in the string.
    }

    return lineCount;
}

int main() {
    char *inputString = "This is a\n sample string\n with 3 lines.";
    int lines = countLines(inputString);
    printf("Number of lines: %d\n", lines);
    return 0;
}
