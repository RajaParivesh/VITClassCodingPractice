#include <stdio.h>

struct student{
    char name[10];
    int roll;
    }s1,s2;

void main(){
    printf("Input your name:");
    scanf("%s",&s1.name);
    printf("Input your roll:");
    scanf("%d",&s1.roll);

    printf("Input your name:");
    scanf("%s",&s2.name);
    printf("Input your roll:");
    scanf("%d",&s2.roll);



    printf("%sis the name. \n ",s1.name);
    printf("%d is the roll \n",s1.roll);
    printf("%s is the name \n",s2.name);
    printf("%d is the roll ",s2.roll);

    }
