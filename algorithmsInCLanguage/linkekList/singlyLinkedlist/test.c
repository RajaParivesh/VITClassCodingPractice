#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct blood_donor{
	char donorname[30];
	char address[40];
	int contact;
	char bloodgrp[3];
};

void display(struct blood_donor a[],int n){  //https://brainly.in/question/1388022
	printf("the donor details are\n");
	int j;
	for(j=1;j<=n;j++){
		int res;
		res = strcmp(a[j].bloodgrp,"A+");
		printf("%d\n",res);
		if(res==0){
			printf("Donor name:%s\tDonor Address:%s\t,Contact:%d\tBlood Group:%s",a[j].donorname,a[j].address,a[j].contact,a[j].bloodgrp);
		}
	}
}

int main()
 {
 	int n,i;
 	printf("Enter no of donor information you want to enter\n ");
 	scanf("%d",&n);
 	struct blood_donor s[n];
 	for(i=1;i<=n;i++)
 	{
 		printf("Enter donor name,address,contact and blood group of donor %d\n",i);
 		scanf("%s%s%d%s",s[i].donorname,s[i].address,&s[i].contact,s[i].bloodgrp);
 	}
 	display(s,n);
 	return 0;
	}