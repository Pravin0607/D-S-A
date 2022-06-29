// time complexity of traversal of array is O(n).
void traverse(int arr[],int track)
{
//     arr is identifier of array of n elements
//     track is used to keep  track of array elements index.
//     if we add new elemet to array we will decrement track by 1.
    int i=0;
    printf("\ntraversing the array \nelements : ");
    for(i;i<track;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
