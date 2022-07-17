//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the no ");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d ",i);
		i++;
	}
}
