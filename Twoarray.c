#include<stdio.h>
int main()
{
	
	int num[10][10],rows,cols,i,j;
	printf("Enter how many rows and cols do you wish:");
	scanf("%d%d",&rows,&cols);
	printf("Enter those elements:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("\nThe elements are:\n ");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		  {
		  	printf("%d ",num[i][j]);
		  }
		printf("\n");
	}
	
	/*int num[2][3]={10,20,30,40,50,60},i,j;
	printf("\nThe elements are:\n ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		  {
		  	printf("%d ",num[i][j]);
		  }
		printf("\n");
	}*/
}

