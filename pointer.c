#include<stdio.h>
int main()
{
	int a=5;
	int b=6;
	int c=8;
	
	int *ptr=&a;
	printf("%d",*ptr);
	
	int *xyz=&b;
printf("%d",*xyz);
	
	int *bnv=&c;
	printf("%d",*bnv);
	printf("\n");
	
	printf("%d",(*ptr)*(*xyz)*(*bnv));
	
}
