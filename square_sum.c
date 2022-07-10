#include <stdlib.h>
#include <stdio.h>

int square_sum(int arr[], int length);

int main(void)
{
    int arr[] = {1, 2, 2, 8};
    int arr_length = sizeof(arr) / sizeof(int);
    int sum = square_sum(arr, arr_length);
    printf("%i\n", sum);
}

int square_sum(int arr[], int length)
{
    int total = 0;
    for (int i = 0; i < length; i++) 
    {
        total += arr[i] * arr[i];
    }
    return total;
}