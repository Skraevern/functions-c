#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* return_longest_word(char* str);

int main(void)
{
    char* string = "Return longest word in a string!!";
    char* longest_word = return_longest_word(string);

    printf("%s\n", longest_word);
}

char* return_longest_word(char* str)
{
    int letters, longest = 0, longest_pos = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        for (letters = 0; str[i] != '\0' && str[i] != ' '; i++) {
            letters++;  
        }
        if (letters > longest) {
            longest = letters;
            longest_pos = i - longest;
        }
    }    
    printf("longest word: %d letters, '%.*s'\n",
           longest, longest, str + longest_pos);
    char* word = str + longest_pos;
    return word;

}