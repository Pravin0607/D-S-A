#include<iostream>
// selection sort divides array in two parts sorted and unsorted.
// each time it select an elemnt and moves it to the sorted list ending.
// time complexity  = O(n^2) 
// space complexity = O(n)
void  selectionsort(int arr[],int size);
void display(int arr[], int size);
int main()
{
    int arr[]={1,5,8,2,4,9,0};
    int size=sizeof(arr)/sizeof(int);
    printf("\nBefore sorting : ");
    display(arr,size);
    selectionsort(arr,size);
    printf("\nAfter sorting : ");
    display(arr,size);
    return 0;
}
void  selectionsort(int arr[],int size)
{
    int i=0,j=0,temp=0,smallElementIndex=0;
    for(i;i<size-1;i++)
    {
        smallElementIndex=i;
        j=i+1;
        for(j;j<size;j++)
        {
            // loop for  unsorted list to find element smaller/bigger
            // ascending - find smallest number.
            // descending - find biggest number.
            if(arr[j]<arr[smallElementIndex])
            // change the < operator with > to get list in descending order.
            {
                smallElementIndex=j;
            }
        }
        temp=arr[smallElementIndex];
        arr[smallElementIndex]=arr[i];
        arr[i]=temp;
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf(" %d", arr[i]);
}