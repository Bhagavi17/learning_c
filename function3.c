#include<stdio.h>
//4.with  returntype and with arguement
int add(int,int);
int main()
{
    int a,b,s;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    s=add(a,b);	
    printf("Sum of 2 numbers:%d",s);
}

int add(int x,int y)
{
	int res;
	res=x+y;
	return res;
	
}


//3.with no returntype and with arguement
/*void add(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    add(a,b);	
}

void add(int x,int y)
{
	int res;
	res=x+y;
	printf("Sum of 2 numbers:%d",res);
}
*/









//2.with returntype and no arguement
/*int add();
int main()
{
    int s;
	s=add();
	printf("Sum of 2 numbers:%d",s)	;	
}
int add()
  {
  	int n1,n2,res; 
	printf("\nEnter any 2 numbers:");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	return res;
  }*/
