#include <stdio.h>                //standard input output header file
#include <stdlib.h>               //memory management malloc,calloc,free,realloc
void bubsrt(int *arr, int size);  // function for bubble sort.
void swap(int *a, int *b);        // function for swapping elements.
void display(int *arr, int size); // function to display elemnts
// Driver function
// entry point
int main()
{
    int arr[] = {3, 6, 2, 4, 5, 7};
    int size = sizeof(arr) / sizeof(int); // calculating elements of array
    //  6=24/4;
    printf("Before sorting\n");
    display(arr, size);
    bubsrt(arr, 6); // pass by reference.
    printf("\nSorted array is:\n");
    display(arr, size);
    return 0;
}
// function for bubble sort
// time complexity O(n^2)
// space complexity O(1)
void bubsrt(int *arr, int size)
{
    int i, j, sorted = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            // if(arr[j]>arr[j+1])//ascending order
            if (arr[j] < arr[j + 1]) // descending order
            {
                swap(&arr[j], &arr[j + 1]);
                sorted = 1;
            }
        }
            if (sorted == 0)
                break;
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}