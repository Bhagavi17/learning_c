#include<stdio.h>
void add();

int main()
{
	int x=200;
	printf("Good afternoon");
	add();  ///function call
//	printf("n1=%d",n1);
	printf("\n********************");
}

void add()   //Function defintion
{
	int n1,n2,res; //local variable
	printf("\nEnter any 2 numbers:");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	printf("\nsum of 2 numbers:%d",res);
	printf("\n x=%d",x);
	return;
}
