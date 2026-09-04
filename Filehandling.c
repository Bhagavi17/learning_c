#include<stdio.h>

int main()
{
// Binary files 
  /* write mode -wb
   read mode  -rb
   append mode -ab
   wb+,rb+,ab+*/
	
//*************** mode w+ AND fseek() ******************
	char str[60];
	FILE *fptr;	
	fptr=fopen("myfile1.txt","w+");
	fputs("How are you",fptr);
	fseek(fptr,5,SEEK_SET);
	fgets(str,sizeof(str),fptr);
	printf("str=%s",str);
	fclose(fptr);

//***********read mode *****************

//	char str[60];
//	FILE *fptr;	
//	fptr=fopen("myfile.txt","r");
//	fgets(str,sizeof(str),fptr);
//	printf("str=%s",str);
//	//fputs("Hello",fptr); not allowed to write
//	fclose(fptr);
//	
	
	
	
//2.**********append mode  ****************
	//char str[20];
//	FILE *fptr;
//	printf("Enter your string:");
//	fflush(stdin);
//	gets(str)
//	fptr=fopen("Myfile.txt","a");
//	fputs(str,fptr);
//	//fputs("\nHow are you",fptr);	
//	fclose(fptr);
	
//1.**********Write mode ***********************
	
//	FILE *fptr;
//	fptr=fopen("Myfile.txt","w");
//	fprintf(fptr,"Bye see you soon");	
//	fclose(fptr);
	
}
