#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool contains_special_characters(char str[]);

int main(void)
{
    char string1[] = "test";
    char string2[] = "/test%";

    bool test1 = contains_special_characters(string1);
    bool test2 = contains_special_characters(string2);
    
    printf("Does  %s  contain special character? %d false \n", string1, test1);
    printf("Does %s contain special character? %d true \n", string2, test2);
    return 0;
}

bool contains_special_characters(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
      || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*'
      || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '{'
      || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':'
      || str[i] == ';' || str[i] == '"' || str[i] == '\'' || str[i] == '<'
      || str[i] == '>' || str[i] == '.' || str[i] == '/' || str[i] == '?'
      || str[i] == '~' || str[i] == '`' )
        {
            return 1;
        }
    }
    return 0;
    
}

