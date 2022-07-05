#include <stdio.h>

int count_positives(int arr[], int array_length);
int sum_negatives(int arr[], int array_length);

int main(void)
{
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12 - 13, -14, -15};

    int array_length = sizeof(num_array) / sizeof(int);

    int number_of_positives = count_positives(num_array, array_length);
    int sum_of_negatives = sum_negatives(num_array, array_length);

    int sum_array[] = {number_of_positives, sum_of_negatives};

    printf("number of positives %i\n", number_of_positives);
    printf("sum negatives %i\n", sum_of_negatives);
    printf("sum_array[%i, %i]\n", number_of_positives, sum_of_negatives);
   
    return 1;
}

int count_positives(int arr[], int array_length)
{
    int count_positives = 0;

    for (int i = 0; i < array_length; i++)
    {
        if (arr[i] > 0)
        {
            count_positives++;
        }
        
    }
    return count_positives;
}

int sum_negatives(int arr[], int array_length)
{
    int sum_negatives = 0;

    for (int i = 0; i < array_length; i++)
    {
        if (arr[i] < 0)
        {
            sum_negatives+= arr[i];
        }
    }
    return sum_negatives;
}
