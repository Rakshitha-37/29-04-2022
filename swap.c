#include <stdio.h>

void swap(int *num1_arg, int *num2_arg)
{
    int temp = *num1_arg;
    *num1_arg = *num2_arg;
    *num2_arg = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    printf("Before swaping:\nnum1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swaping:\nnum1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
