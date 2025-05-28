#include<stdio.h>
#include <math.h>

extern int add();  //link
extern int sub();
extern int mul();
extern int div();

//function declarations for calculator


int addition(int num1, int num2, int res)
{
	int val;
	res = num1 + num2;
	val = add(res);    //send the result to add fauntion that in the assembly
	printf("%d",val);  //print the result
	printf("\n");

}

	//function 2 to subtract two numbers
int subtraction(int num1, int num2, int res)
{
	  int val;
	  res = num1 - num2;
	  val = sub(res);    //send the result to add fauntion that in the assembly
	  printf("%d",val);  //print the result
	  printf("\n");

}

//function 3 to multiply two numbers
int multiplication(int num1, int num2, int res)
{
	  int val;
	  res = num1 * num2;
	  val = mul(res);    //send the result to add fauntion that in the assembly
	  printf("%d",val);  //print the result
	  printf("\n");

}

//function 4 to divide two numbers
int division(int num1, int num2, int res)
{
	  int val;
	  res = num1 / num2;
	  val = div(res);    //send the result to add fauntion that in the assembly
	  printf("%d",val);  //print the result
	  printf("\n");

}


int main ()
{
  char op;//operator
  int num1, num2, res ;
  double result = 0.0;

  /* Print welcome message */
  printf ("WELCOME TO OUR SIMPLE CALCULATOR\n");
  printf ("----------------------------\n");


  /* Input two number and operator from user */
    printf("Enter numbers with operation [+, -, *, /] \n");
    scanf ("%d %c %d", &num1, &op, &num2);

    if (op == '+' )
    {
        addition(num1, num2 , res);
    }
    else if (op == '-')
    {
        subtraction(num1, num2 , res);
     }

    else if (op == '*')
    {
        multiplication(num1, num2, res);
     }
        else if (op == '/')
    {
        division(num1, num2, res);
    }

        else
    {
        printf("Invalid operator");
    }



  return 0;
}
//gcc -no-pie codec2.c codec2.o -o calc
