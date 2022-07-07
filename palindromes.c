#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Maximum name size + 1. */

#define MAX_STRING_SZ 256

void remove_spaces(char* str);
void reverse_str(char str[]);

int main(int argC, char *argV[]) {
    
    /* Allocate memory and check if okay. */
    char *input_str = malloc(MAX_STRING_SZ);
    if (input_str == NULL) {
        printf("No memory\n");
        return 1;
    }
    
    // Ask user for input_str. 
    printf("Enter word or sentence and check if its a palindrome: ");

    // Get the input_str, with size limit.
    fgets(input_str, MAX_STRING_SZ, stdin);

    // Remove trailing newline, if there.
    if ((strlen(input_str) > 0) && (input_str[strlen(input_str) - 1] == '\n'))
    {
        input_str[strlen (input_str) - 1] = '\0';
    }

    char *str = malloc(strlen(input_str) + 1);
    if (str == NULL) {
        printf("No memory\n");
        return 1;
    }

    // Push to new array if its a letter or space and make it lowercase
    for (int i = 0; i < strlen(input_str); i++)
    {
        if((input_str[i] >= 'a' && input_str[i] <= 'z') || (input_str[i] >= 'A' && input_str[i] <= 'Z') || (input_str[i] == ' '))
        {
            str[i] = tolower(input_str[i]);
        }
    }
    // remove spaces from new string. Free memory old string
    remove_spaces(str);
    
    
    // create new reverse string array
    char *rev_str = malloc(strlen(str) + 1);
    if (rev_str == NULL) {
        printf("No memory\n");
        return 1;
       }
    for (int i = 0; i < strlen(str); i++)
    {
        rev_str[i] = str[i];
    }
    
    // Make str and rev_str lowercase



    reverse_str(rev_str);

    printf("%s\n", str);
    printf("%s\n", rev_str);

    // Check if strings are the same.
    if(strcmp(str, rev_str) == 0)
    {
        printf("%s is a palindrome\n", input_str);
    }
    else
    {
         printf("%s is not a palindrome\n", input_str);
    }
    

    /* Free memory and exit. */
    free(input_str);
    free(str);
    free(rev_str);
    return 0;
}

void remove_spaces(char* str) 
{
    char* d = str;
    do {
        while (*d == ' ') 
        {
            ++d;
        }
    } while ((*str++ = *d++));
}

void reverse_str(char str[])
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}



/*
// check if word is a palindrome

const palindromes = function (str) {
  let containsSpecialCharacters = function (str) {
    const specialChars = /[`!@#$%^&*()_+\-=\[\]{};':"\\|,.<>\/?~]/;
    return specialChars.test(str);
  };
  let strArray = [];
  for (let i = 0; i < str.length; i++) {
    if (!containsSpecialCharacters(str[i])) {
      strArray.push(str[i]);
    }
  }
  let string = strArray.join("").replace(/\s+/g, "").toLowerCase();
  strArray.reverse();
  let stringReverse = strArray.join("").replace(/\s+/g, "").toLowerCase();

  if (string === stringReverse) {
    return true;
  } else {
    return false;
  }
};
console.log(palindromes(`race`)); // fale
console.log(palindromes(`racecar`)); // true
console.log(palindromes(`racecar!`)); // true
console.log(palindromes(`A car, a man, a maraca.!`)); // true
*/