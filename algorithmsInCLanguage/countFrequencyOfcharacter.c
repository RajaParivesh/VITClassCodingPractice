#include <stdio.h>
#include <string.h>

int main()
{
   char string[100],k;
   int c = 0, count[26] = {0}, x, sum = 0;

   printf("Enter a string\n");
   gets(string);
   scanf("%d",&k);

   while (string[c] != '\0') {
   /** Considering characters from 'a' to 'z' only and ignoring others. */

      if (string[c] >= 'a' && string[c] <= 'z') {
         x = string[c] - 'a';
         count[x]++;
      }
      c++;
   }

   for (c = 0; c < 26; c++){
        if(count[c]>0){
            printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
            sum += count[c]*count[c];
        }
   }
   printf("%d", sum);
   return 0;
}
