#include <stdio.h>
#define SIZE 5
void bubble_sort(int *arr, int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, SIZE);
    printf("After sorting, array elements: ");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
