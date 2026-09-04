#include<stdio.h>
//*******************enumeration **************************
enum week
{
	sunday=0,
	monday=1,
	tuesday=2,
	wednesday=3,
	thursday=4,
	Friday=5,
	saturday=6
};

enum color{Red=4,Blue,Orange};



int main()
{
	
	enum color mycolor=Blue;
	printf("%d",mycolor);
	
	/*enum week myday=wednesday;
	printf("%d",myday);*/
	
}



//****************************union *************************
/*union Data
{
	int n1;
	float f;
	//char name[10];	
};*/
/*int main()
{
	union Data d1;
	printf("\nEnter value for n1:");
	scanf("%d",&d1.n1);
	printf("\n Enter value for f:");
	scanf("%f",&d1.f);
	printf("\n n1=%d",d1.n1);
	printf("\n f=%f",d1.f);
	 printf("\nsizeof u:%d",sizeof(d1));
	
	
  union Data u1={101,"Tom"};
  printf("n1=%d\n",u1.n1);
  printf("name=%s",u1.name);
  printf("\nsizeof u:%d",sizeof(u1));
}*/







//***************************structure***************************
/*struct Student
{
	int rno;
	char name[20];
	int marks;
}*
int main()
{
	struct Student s1={1,"Tom",78},s2;
	printf("\n Enter details for s2:");
	printf("\n Enter rollno:");
	scanf("%d",&s2.rno);
	printf("\n Enter name:");
	fflush(stdin);//its flush the data
	gets(s2.name);
	printf("\n Enter marks:");
	scanf("%d",&s2.marks);
	printf("\n***************Details of s2:****************\n");
	printf("\n Rollno:%d",s2.rno);	
	printf("\n Name:%s",s2.name);
	printf("\n Marks:%d",s2.marks);
	
	
	
	printf("\nDetails of s1:\n");
	printf("\n Rollno:%d",s1.rno);	
	printf("\n Name:%s",s1.name);
	printf("\n Marks:%d",s1.marks);
	printf("\nSize of s1:%d",sizeof(s1));
	
}*/

