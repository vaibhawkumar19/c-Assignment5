//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*2-1);
	}
	getch();	
}
