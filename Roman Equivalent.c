#include<stdio.h>
#include<conio.h>
int roman(int);
int main()
{
	int a,b;
	printf("Enter the Number\t");
	scanf("%d",&a);
	printf("Roman Equivalent of Number is \t")
	roman(a);
	getch();
	return 0;
}
int roman(int x)
{
	while(x>=1000)
	{
	  printf("M");
	  x=x-1000;
    }
    while(x>=500)
    {
    	printf("D");
    	x=x-500;
	}
	while(x>=100)
	{
		printf("C");
		x=x-100;
	}
	while(x>=50)
	{
		printf("L");
		x=x-50;
	}
	while(x>=10)
	{
		printf("X");
		x=x-10;
	}
	while(x>=5)
	{
		printf("V");
		x=x-5;
	}
	while(x>=1)
	{
		printf("I");
		x=x-1;
	}
return 0;	
	
}
