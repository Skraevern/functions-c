#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char* capitalize(char str[]);

int main(void)
{
    char string[] = "oNly FirSt LetteR is CapAiTalized";

    char* cap_string = capitalize(string);

    printf("main %s\n", cap_string);
    return 0;
}

char* capitalize(char str[])
{
    // First letter is capitalized
    str[0] = toupper(str[0]);
    
    // For loop to change all letters exept first to lower.
    for (int i = 1; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("func %s\n", str);
    return str;
}



/*
int main(void)
{
    char string[] = "oNly FirSt LetteR is CapAiTalized";

    string[0] = toupper(string[0]);
    
    for (int i = 1; i < strlen(string); i++)
    {
        string[i] = tolower(string[i]);
    }
    
    printf("%s\n", string);
    return 0;
}
*/



