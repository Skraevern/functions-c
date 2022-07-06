#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int atoi(const char *str);
int fibonacci(int num);

int main(int argc, char* argv[])
{
    if (argv[1] == NULL)
    {
        printf("Usage: ./fibonacci int\n");
        return 1;
    }
    if (argv[2] != NULL)
    {
        printf("Usage: ./fibonacci int\n");
        return 1;
    }
    int input_num = atoi(argv[1]);
    if (input_num == 0)
    {
       printf("Usage: ./fibonacci int\n");
       return 1;
    }
    if (input_num < 0)
    {
        printf("Usage: ./fibonacci (positive) int\n");
    }
    int fib_num = fibonacci(input_num);
    printf("%i\n", fib_num);
}

int fibonacci(int num)
{
    int fib_array[num + 1];
    

    fib_array[0] = 0;
    fib_array[1] = 1;

    for (int i = 2; i <= num + 1; i++)
    {
        fib_array[i] = fib_array[i - 2] + fib_array[i - 1];

    }
    int fib_num = fib_array[num];
    
    return fib_num;
}
