#include<stdio.h>
int main()
{
	int n1=10;
	int*ptr;
	ptr=&n1;
	printf("n1=%d",n1);
	printf("\nAddress of n1:%u",ptr);
}
