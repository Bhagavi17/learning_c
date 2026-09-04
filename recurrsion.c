//Recurssion function

#include<stdio.h>
int factorial(int);
int main()
{
	int x,res;
	printf("Enter number:");
	scanf("%d",&x);
	res=factorial(x);
	printf("Factorial of the number=%d",res);
}
int factorial(int n)
{
	int f;
	if(n==0 || n==1)
      f=1;
	else
	  f=n*factorial(n-1);
    return f;
}
	
	
	
	
	
	
	

