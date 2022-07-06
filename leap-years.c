#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool leap_years(int year);
bool is_int(float num);

int main(int argc, char* argv[])
{
    if (argv[1] == NULL)
    {
        printf("Usage: ./leap-years int\n");
        return 1;
    }
    if (argv[2] != NULL)
    {
        printf("Usage: ./leap-years int\n");
        return 1;
    }
    int input_year = atoi(argv[1]);
    if (input_year == 0)
    {
       printf("Usage: ./leap-years int\n");
       return 1;
    }

    if (leap_years(input_year) == true)
    {
        printf("%i is a leap year\n", input_year);
    }
    else
    {
        printf("%i is not a leap year\n", input_year);
    }
    return 1;
    
}

bool leap_years(int year)
{
    float calc4 = year / 4.0;
    float calc100 = year / 100.0;
    float calc400 = year / 400.0;
    
    printf("calc4 %f\n", calc4);
    printf("calc100 %f\n", calc100);
    printf("calc400 %f\n", calc400);

    if (is_int(calc4) && is_int(calc100) == false)
    {
        return true;
    }
    else if (is_int(calc100) && is_int(calc400) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
bool is_int(float num)
{
    if (num-(int)num == 0)  
    {
        return true;
    }
    else
    {
        return false;
    }
}   
/*
float f = 4.5886;
if (f-(int)f == 0)
     printf("yes\n");
else printf("no\n");
*/
/*
const leapYears = function (year) {
  if (Number.isInteger(year / 4) && Number.isInteger(year / 100) === false) {
    return true;
  } else if (Number.isInteger(year / 100) && Number.isInteger(year / 400)) {
    return true;
  } else {
    return false;
  }
};
*/