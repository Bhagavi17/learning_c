//A function can call another function --it is called non-recurssion
//call by value

#include<stdio.h>
void add();//function protoptype/declaration
void area();

int main()
{
	printf("Good afternoon");
	add();  ///function call
	printf("\n********************");
	//area();
	printf("\n******************");
	printf("\nEnd of application");
	//add();
	return;
}

void add()   //Function defintion
{
	int n1,n2,res;
	printf("\nEnter any 2 numbers:");
	scanf("%d%d",&n1,&n2);
	return;
	res=n1+n2;
	printf("\nsum of 2 numbers:%d",res);
	area();
	return;
}
void area()
{
	float radius,area,pi=3.14;
	printf("\nEnter radius:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("Area of circle:%.2f",area);
	
}
void sub()
{
}











