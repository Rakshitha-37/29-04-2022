#include <stdio.h>
#define SIZE 5

void copy(int *arr1, int *arr2)
{
   for(int i = 0;i < SIZE;i++)
   {
       *(arr2 + i) = *(arr1 + i);
   }
}

int main()
{
   int arr1[SIZE];
   int arr2[SIZE];
   printf("Enter array elements: ");
   for(int i = 0;i < SIZE;i++)
   {
       scanf("%d", &arr1[i]);
   }
   printf("Array1 elements are: ");
   for(int i = 0;i < SIZE;i++)
   {
       printf("%d ", arr1[i]);
   }
   printf("\n");
   copy(arr1, arr2);
   printf("Array2 elements are: ");
   for(int i = 0;i < SIZE;i++)
   {
       printf("%d ", arr2[i]);
   }

    return 0;
}
