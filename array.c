#include<stdio.h>
int main()
{
	//2.Accepting from user
	int num[20],n,i;
	printf("\n How many numbers you wish to enter:");
	scanf("%d",&n);//n=8
	printf("\nEnter those numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
    printf("\n The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	
	
	
	//1.Initialsation
	
	/*int num[5]={10,45,60,25,60},i;
	printf("\n The elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}*/
	
	/*printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
	printf("%d\n",num[3]);
	printf("%d\n",num[4]);*/
	
}
