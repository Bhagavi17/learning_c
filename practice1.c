//NESTED LOOP
#include<stdio.h>

int main()
 {
 /*	int i,j;

for(i=0;i<3;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=0;j<2;j++)//j=0 ,j=1 2 times inner loop
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("\nHello");
	}
}

	}*/	
//****************************************************
/*Q.2	 hello hello 
	 hello hello
	 helllo hello

	int i,j;

for(i=0;i<3;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=0;j<2;j++)//j=0 ,j=1 2 times inner loop
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("Hello ");
		
	}
	printf("\n");
}*/
//****************************************************
//Q.3 * * *
//    * * * 
/*	int i,j;

for(i=0;i<4;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=0;j<3;j++)//j=0 ,j=1 2 times inner loop
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("* ");
		
	}
	printf("\n");
}*/
//****************************************************
//Q.4 *
//    * *	
/*int i,j;

for(i=0;i<3;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=0;j<=i;j++)//j=0 ,j=1 2 times inner loop
	//
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("* ");
		
	}
	printf("\n");
}*/	
//****************************************************
/*Q.4 1
1 2
1 2 3*/
/*int i,j;

for(i=0;i<4;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=1;j<=i;j++)//j=0 ,j=1 2 times inner loop
	//
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("%d ",j);
		
	}
	printf("\n");
}	*/
//********************************************************
//Q.5 1 
 //2 2 
// 3 3 3  
/*int i,j;

for(i=0;i<4;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=1;j<=i;j++)//j=0 ,j=1 2 times inner loop
	//
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		printf("%d ",i);
		
	}
	printf("\n");
}*/
//****************************************************************
/* 	Q.6 1 
         1 2 
         * * * 
         1 2 3 4 */
int i,j;

for(i=0;i<5;i++)//i=0,i=1,i=2 3 times outer loop
{
	for(j=1;j<=i;j++)//j=0 ,j=1 2 times inner loop
	//
	// i=0 j=0 ,j=1 2 times ,i=1 j=0 ,j=1 2 times ,i=2 j=0 ,j=1 2 times
	//3*2=6
	{
		if(i==3)
		printf("* ");
		else
		printf("%d ",j);
		
	}
	printf("\n");
}	

}
	
	


