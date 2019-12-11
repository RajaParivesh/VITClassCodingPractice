
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
   char arr[100];

   printf("Enter a string to reverse\n");
   gets(arr);
   int i;
   char a[100];
   for(i=0;i<=strlen(arr)-1;i++)
   {
      a[i] = arr[strlen(arr)-1-i];
   }
   for(i=0;i<=strlen(arr)-1;i++){
      printf("%c",a[i]);
   }

   return 0;
}
