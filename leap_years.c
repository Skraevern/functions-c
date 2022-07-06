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
    return 0;
    
}

bool leap_years(int year)
{
    if (is_int(year / 4.0) && is_int(year / 100.0) == false)
    {
        return true;
    }
    else if (is_int(year / 100.0) && is_int(year / 400.0) == true)
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
