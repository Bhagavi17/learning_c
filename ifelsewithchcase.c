#include<stdio.h>

int main()
{

/*Q1.Accept a character and print whether it is vowel or constant
a,e,i,o,u -vowel
charc ch1=u*/

/*char ch1;
printf("\n Enter any alphabets:");
scanf("%c",&ch1);
switch(ch1)
{
	case 'a':printf("vowel");
	break;
	case 'e':printf("vowel");
	break;
	case 'i':printf("vowel");
	break;
	case 'o':printf("vowel");
	break;
	case 'u':printf("vowel");
	break;
	default:printf("\n consonant");

}
printf("\n End of the program");*/

//Q.2 Accept 2 operands and 1 arithemetic oper(+,-,*,/)
//print the result as per the operator 
// int n1,n2,result;
//char ch;*
  int n1,n2,result;
  char ch;
  
  printf("Enter the First number:");
  scanf("%d",&n1);
  
  printf("Enter the Second number:");
  scanf("%d",&n2);
  
   printf("Enter arithmetic operator (+, -, *, /): ");
    scanf(" %c", &ch);
  switch(ch)
  {
  	case '+':result = n1 + n2;
    printf("Result = %d", result);
    break;
    case '-':result = n1 - n2;
    printf("Result = %d", result);
    break;

    case '*':result = n1 * n2;
    printf("Result = %d", result);
    break;

    case '/': result = n1 / n2;
    printf("Result = %d", result);
    break;
    
    default:
    printf("\nInvalid number");
    
  }
//*****************switch case**************	
/*switch(Var):
{
	case val1:st1;integer or var
	st2;
	breask;*/
	

//
//    int n1;
//
//    printf("Enter any number between 1 to 3: ");
//    scanf("%d", &n1);
//
//    switch(n1)
//    {
//        case 1:
//            printf("\nOne");
//            break;
//
//        case 2:
//            printf("\nTwo");
//            break;
//
//        case 3:
//            printf("\nThree");
//            break;
//
//        default:
//            printf("\nInvalid number");
//    }
//
//    printf("\nEnd of program");
//
// 
//	
	/*Q.1 Accept maerks of 5 subjcets calculate percentage and display
	 as follows
	above 75 ----------Distinction
	between 6o to 75-----------first class
	between 50 to 60----------------second class
	between 40 to 50 ------------------pass 
	otherwise ----------------fail*/
 /*int m1,m2,m3,cg,oop;
 float total,percentage;
 printf("Enter the marks of 5 subjects:");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&cg,&oop);
 total =m1+m2+m3+cg+oop;
 percentage=total/5;
 printf("Total = %f\n", total);
printf("Percentage = %f\n", percentage);
    if (percentage > 75)
        printf("Distinction");
    else if (percentage >= 60)
        printf("First Class");
    else if (percentage >= 50)
        printf("Second Class");
    else if (percentage >= 40)
        printf("Pass");
    else
        printf("Fail");*/

	//using ladder if else
/*int n1,n2,n3;
printf("Enter 3 numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
	printf("n1 is max");
	else if (n2>n3)
	printf("n2 is max");
	else
	printf("n3 is max");
*/
//nested if else
//int n1,n2,n3;
//printf("Enter 3 numbers:");
//scanf("%d%d%d",&n1,&n2,&n3);
//if(n1>n2)
//{
//	if (n1>n3)
//	printf("n1 is max");
//	else
//	printf("n3 is max");
//	
//}
//else
//{
//	if(n2>n3)
//	printf("n2 is max");
//	else
//	printf("n3 is max");
//}
return 0;
}
