/**********************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : recursive_fibonacci.c
Date   : 24/10/17
Description : To print the fibonacci series for +ve and -ve numbers using recursive function.
 **********************************************************************************************************************************************************/

#include <stdio.h>
void fibo_pos(int num1, int num2, int num3, int limit);
int fibo_neg(int num1, int num2, int num3, int limit, int new);

int main()
{
	int index, limit, num1, num2, num3 = 0, new = 0; 
	char rep;
	do
	{

	//prompt the user to enter no.
	printf("Enter the limit: ");
	scanf("%d", &limit);

	//To generate fibonacci series for +ve numbers.
	if (limit > 0)
	{  
		num1 = 0;
		num2 = 1;
		num3 = num1 + num2;

		printf("%d\t%d\t", num1, num2);

		// Function call to find +ve series.
		fibo_pos(num1, num2, num3, limit);
	}


	// To generate fibonacci series for -ve numbers.
	else if (limit < 0)
	{

		num1 = 0;
		num2 = 1;

		num3 = num1 - num2;

		printf("%d \t %d\t", num1, num2);

		// Function call to find -ve series.
		int ntg = fibo_neg(num1, num2, num3, limit, new);

	}


	// Displays the error message if user enters 0 as limit.
	else
	{
		printf("Invalid input!!\n");
	}
	printf("do you want to continue..press [Yy | Nn] : ");
	scanf("\n%c", &rep);
} while (rep == 'Y' || rep == 'y');

} 
// Function defination.
int fibo_neg(int num1, int num2, int num3, int limit, int new)
{

	//num3 = num1 - num2;
	if (num3 >= limit)
	{

		// To check +ve nos. in series not to exceed the limit.
		if (num3 > 0)
		{
			new = num3 * -1;
		}

		// To terminate the series if +ve number exceeds the -ve limit.
		if (new < limit)
		{
			return 0;
		}


		printf("%d\t", num3);
		num1 = num2;
		num2 = num3;

		num3 = num1 - num2;

		// Callinfg function recursively.
		fibo_neg(num1, num2, num3, limit, new);
	}
	printf("\n");
}




// Function definition.
void fibo_pos(int num1, int num2, int num3, int limit)
{

	//num3 = num1 + num2;
	if (num3 <= limit)
	{

		printf("%d\t", num3);
		num1 = num2;
		num2 = num3;

		num3 = num1 + num2;

		// Calling function recursively.
		fibo_pos(num1, num2, num3, limit);
	}
	printf("\n");
}

