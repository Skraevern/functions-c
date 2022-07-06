#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool is_int(float num);

int main(void)
{
    float num = 4.2142;
    if (is_int(num) == true)
    {
        printf("true");
    }
    else 
    {
        printf("false");
    }
    
    return 1;
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