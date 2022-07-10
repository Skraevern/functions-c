#include <stdio.h>
#include <stdlib.h>

void repeat_string(char* str, int num);

int main(void)
{
    char* string = "Hey";
    repeat_string(string, 3);
    repeat_string(string, 10);
    repeat_string(string, 1);
    repeat_string(string, 0);
    repeat_string(string, -1);
}
void repeat_string(char* str, int num)
{
    if (num == 0)
    {
        printf(" \n");
        return;
    }
    else if (num < 0)
    {
        printf("Error\n");
        return;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("%s", str);
        }
        printf("\n");
        
    }
    
}
/*
const repeatString = function (str, num) {
  let string = str;
  let number = num;

  if (number === 0) {
    string = ``;
    return string;
  } else if (number < 0) {
    string = `ERROR`;
    return string;
  } else {
    for (let index = 1; index < num; index++) {
      string = string + str;
    }
  }
  return string;
};

console.log(repeatString(`hey`, 3)); // heyheyhey
console.log(repeatString("hey", 10)); // heyheyheyheyheyheyheyheyheyhey"
console.log(repeatString("hey", 1)); // hey
console.log(repeatString("hey", 0)); // ""
console.log(repeatString("hey", -1)); // Error
console.log(repeatString("hey", number).match(/((hey))/g).length); // random number of hey
console.log(repeatString("", 10)); // ""
*/