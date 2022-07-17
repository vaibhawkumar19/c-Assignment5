//9. Write a program to print cubes of the first N natural number.
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i*i);
	}
	return 0;
}
