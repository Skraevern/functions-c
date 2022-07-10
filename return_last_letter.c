#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char return_last_letter(char* str);

int main(void)
{
    char* string = "Hello you";

    char last_letter = return_last_letter(string);

    printf("%c\n", last_letter);
}

char return_last_letter(char* str)
{
    int string_length = strlen(str);
    char last_letter = str[string_length - 1];

    return last_letter;
}