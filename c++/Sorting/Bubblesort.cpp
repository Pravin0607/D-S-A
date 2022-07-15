#include<iostream>
void bublesort(int *a,int size);//function to sort the array
void swap(int *a,int *b);//function to swap the elements
void display(int *a,int size);//function to display the array
int main()
{
    int arr[] = {10,5,6,3,7,8,2};
    int size=sizeof(arr)/sizeof(int);//size of array
    printf("\nBefore sorting : ");
    display(arr,size);
    bublesort(arr,size);//calling function to sort the array
    printf("\nAfter sorting : ");
    display(arr,size);
    return 0;
}
void bublesort(int *a,int size)
{
    int i=0,j=0;
    for(i=0;i<size;i++)
    for(j=0;j<size-1-i;j++)
    if(a[j]>a[j+1])//ascending order
    // if(a[j]<a[j+1])//descending order
    swap(&a[j],&a[j+1]);//passing address of elements to swap function
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int *a,int size)
{
    for(int i=0;i<size;i++)
    printf(" %d",a[i]);
}