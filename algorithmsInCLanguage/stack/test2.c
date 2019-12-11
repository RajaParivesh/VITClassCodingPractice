// // #include <stdio.h>
// // #include <string.h>
 
// // int main()
// // {
// // 	char a[100];
// //  	int length;
 
// // 	printf("Enter a string to calculate it's length\n");
	 
// // 	gets(a);
// // 	// scanf("%s", a);
// // 	printf("%s\n",a );
 
// // 	length = strlen(a);
 
// // 	printf("Length of the string = %d\n", length);
 
// // 	return 0;
// // }

// #include <stdio.h>
// #include<string.h>

// int main () {
//    char str[50];
//    char name[30];
//    char lname[30];
//    printf("Enter a string : ");
//    fgets(name,50,stdin); 
//    fgets(lname,8,stdin);
//    printf("%s\n",name );
//    printf("%s\n",lname );
//    printf("%c", name[0]);
//    printf("%c", name[1]);
//    printf("%c", name[2]);
   
//    char s[45] = "raja kumar";
//    printf("You entered: %c", strrev(s));
//    return(0);
// }

  
// char *revstr(char str[50]){
//    int i;
//    char revstr[50];
   
//    for(i=0; i<strlen(str); i++){
//       revstr[i]=str[strlen(str)-i];
//    }

//    return revstr;
// }

// void reverse(char array[30]) // for reverse of the given expression {
//    int i,j;
//    char temp[100];
//    for (i=strlen(array)-1,j=0;i+1!=0;--i,++j) {
//       temp[j]=array[i];
//    }
//    temp[j]='\0';
//    strcpy(array,temp);
//    return array; 
// }

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
   fgets(arr,12,stdin);  //abc
   int i;                       
   char a[100];
   for(i=0;i!='\0';i++)   //0
   {
      a[i]= arr[strlen(arr)-1-i];  //0->c 1->c  
   }
   for(i=0;i!='\0';i++){
      printf("%c\n",a[i]);
   }
   
   // printf("Reverse of the string is \n%s\n", arr);
 
   return 0;
}