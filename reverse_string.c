#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_SZ 256

void reverse_str(char* str);
void remove_spaces(char* str); 

int main(int argC, char *argV[]) 
{
        // Allocate memory and check if okay.
        char *input_str = malloc(MAX_STRING_SZ);
        if (input_str == NULL) 
        {
            printf("No memory\n");
            return 1;
        }
        
        // Ask user for input_str. 
        printf("Enter word or sentence to revers: ");

        // Get the input_str, with size limit.
        fgets(input_str, MAX_STRING_SZ, stdin);
        printf("%s", input_str);

        // Remove trailing newline, if there are any.
        if ((strlen(input_str) > 0) && (input_str[strlen(input_str) - 1] == '\n'))
        {
            input_str[strlen (input_str) - 1] = '\0';
        }

        char *str = malloc(strlen(input_str) + 1);
        if (str == NULL) {
            printf("No memory\n");
            return 1;
        }

    reverse_str(input_str);

    printf("%s\n", input_str);
    free(input_str);
    free(str);
    return 0;
}

void reverse_str(char* str)
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}
