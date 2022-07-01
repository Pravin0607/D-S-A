#include <stdio.h>
void insert_at_given_pos(int arr[], int pos, int data);
void insert_at_beg(int arr[], int data);
void insert_at_end(int arr[], int data);
void delet_from_given_pos(int arr[],int pos);
void delet_from_end(int arr[]);
void delet_from_beg(int arr[]);
void traverse(int arr[]);
void update(int arr[], int data, int pos);
int track = -1;
int size = 10;
// driver code
int main()
{
    int arr[10]; // array declaration.
    int ch;
    do
    {
        printf("\n1.traversal.");
        printf("\n2.insertion");
        printf("\n3.update");
        printf("\n4.deletion.");
        printf("\n0.exit");
        printf("\nenter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            traverse(arr);
            break;
        case 2:
            int ch1 = 1, data = 0, pos = 0;
            do
            {
                printf("\n1.insert at the begining.");
                printf("\n2.insert at the given position.");
                printf("\n3.insert at the end");
                printf("\n0.to main menu.");
                printf("\nenter your choice : ");
                scanf("%d", &ch1);
                switch (ch1)
                {
                case 1:
                    printf("\nenter data : ");
                    scanf("%d", &data);
                    insert_at_beg(arr, data);
                    break;
                case 2:
                    printf("\nenter data : ");
                    scanf("%d", &data);
                    printf("\nenter position : ");
                    scanf("%d", &pos);
                    insert_at_given_pos(arr, pos, data);
                    break;
                case 3:
                    printf("\nenter data : ");
                    scanf("%d", &data);
                    insert_at_end(arr, data);
                    break;
                case 0:
                    printf("\n entering main menu.......");
                    break;
                default:
                    printf("\ninvalid choice : ");
                    break;
                }
            } while (ch1 != 0);
            break;
        case 3:
            printf("\nenter data : ");
            scanf("%d", &data);
            printf("\nenter position : ");
            scanf("%d", &pos);
            update(arr, data, pos);
            break;
        case 4:
            int ch3 = 0;
             do
            {
                printf("\n1.delete from begining.");
                printf("\n2.delete from end.");
                printf("\n3.delete from given position.");
                printf("\n0.to main menu");
                printf("\nenter your choice : ");
                scanf("%d",& ch3);
                switch (ch3)
                {
                case 1:

                    delet_from_beg(arr);
                    break;
                case 2:

                    delet_from_end(arr);
                    break;
                case 3:
                printf("\nenter position : ");
                scanf("%d",&pos);
                    delet_from_given_pos(arr,pos);
                    break;
                case 0:
                    printf("\nloading main menu.....");
                    break;
                default:
                    printf("\ninvalid input.");
                    break;
                }
            }
            while (ch3 != 0)
                ;
            break;
        case 0:
            break;
        }
    } while (ch != 0);
    return 0;
}
// function definations.
void insert_at_given_pos(int arr[], int pos, int data)
{
    int i = 0;
    if (pos <= track)
    {
        for (i = track; i > pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = data;
        track++;
        printf("\ndata inserted.");
    }
                traverse(arr);
}
void insert_at_beg(int arr[], int data)
{
    int i = 0;
    if (track == -1)
    {
        arr[0] = data;
        track = 0;
        printf("\ndata inserted at the begining.");
    }
    else if (track <= size - 1)
    {
        for (i = track; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = data;
        track++;
        printf("\ndata inserted at the begining.");
    }
    else
    {
        printf("\ncould not inserrt data array is full.");
    }
                traverse(arr);
}
void insert_at_end(int arr[], int data)
{
    if (track <= size - 1)
    {
        arr[track + 1] = data;
        track++;
    }
    else
    {
        printf("\ncould not inserrt data array is full.");
    }
                traverse(arr);
}

//

void delet_from_given_pos(int arr[],int pos)
{
 int i=0;
 if(pos-1<track)
 {
    for(i=pos-1;i<track;i++)
    arr[i]=arr[i+1];
    track--;
 }
 else
 {
    printf("\ncould not delete element pos out or array empty.");
 }
             traverse(arr);
}
void delet_from_end(int arr[])
{
    if(track!=-1)
    {
        track--;
    }
    else
    {
        printf("\nno elements  in array..");
    }
                traverse(arr);
}

void delet_from_beg(int arr[])
{
    int i=0;
    if(track!=-1)
    {
        for(i=0;i<track;i++)
        arr[i]=arr[i+1];
        track--;
    }
    else
    {
        printf("\nno elements in array..");
    }
                traverse(arr);
}

//

void traverse(int arr[])
{
    int i = 0;
    printf("\nelemnts : ");
    for (i; i <= track; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
void update(int arr[], int data, int pos)
{
    if (pos - 1 <= track)
    {
        arr[pos - 1] = data;
    }
    else
    {
        printf("\ncould not update");
    }
                traverse(arr);
}
