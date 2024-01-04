/*Simple Calculator Program in C
 
This program performs basic arithmetic operations using an array of function pointers.
Supported operations: Addition, Subtraction, Multiplication, and Division.*/
#include<stdio.h>

void add(float a, float b)  //fuction definition
{
	printf("addition of %f and %f is %.2f",a,b,a+b);
}

void sub(float a, float b)   //fuction definition
{
	printf("subtraction of %f and %f is %.2f",a,b,a-b);
}

void mul(float a, float b)   //fuction definition
{
	printf("multiplication of %f and %f is %.2f",a,b,a*b);
}

void div(float a, float b)    //fuction definition
{
	if(b>0)
	{
		printf("division of %f and %f is %.2f",a,b,a/b);
	}
	else{
		printf("Error: Division by zero!\nValue of b must be grater than 0");
	}
	
}

int main()
{
	int ch;
	float a,b;
	void (*fptr[10])(float,float)={add,sub,mul,div};  //Declaration & Initialization of array of function pointer
	
	printf("Enter your choice:\n0)ADD\n1)SUB\n2)MUL\n3)DIV\n");
	scanf("%d",&ch);
	printf("Enter a & b values: ");
	scanf("%f%f",&a,&b);
	if(ch>=0&&ch<=3)
	{
		(*fptr[ch])(a,b);     //calling function
	}
	else{
		printf("Invalid choice!!!");
	}
	
	return 0;
}