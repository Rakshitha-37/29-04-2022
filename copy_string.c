#include <stdio.h>


int copy(char *str2, char *str1)
{
    int count = 0;
   for(int i = 0;*(str1 + i) != '\0';i++)
   {
       *(str2 + i) = *(str1 + i);
       count++;
   }
   return count;
}

int main()
{
   char str1[] = "Rakshitha";
   char str2[10];
   printf("str1 = %s\n", str1);
   int str_len = copy(str2, str1);
   printf("string length is = %d\n", str_len);
   printf("str2 = %s\n", str2);

    return 0;
}
