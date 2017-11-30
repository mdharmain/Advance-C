/**********************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : 2_fibonacci.c
Date   : 4/10/17
Description : To print the fibonacci series for +ve and -ve numbers.
 **********************************************************************************************************************************************************/

#include <stdio.h>

int main()
{
	int index, limit, num1, num2, num3, new; 

	//prompt the user to enter no.
	printf("Enter the limit: ");
	scanf("%d", &limit);

	//To generate fibonacci series for +ve numbers.
	if (limit > 0)
	{
		num1 = 0;
		num2 = 1;

		printf("%d\t%d\t", num1, num2);

		num3 = num1 + num2;
		while (num3 <= limit)
		{

			printf("%d\t", num3);
			num1 = num2;
			num2 = num3;

			num3 = num1 + num2;
		}
		printf("\n");
	}

	// To generate fibonacci series for -ve numbers.
	else if (limit < 0)
	{

		num1 = 0;
		num2 = 1;

		printf("%d \t %d\t", num1, num2);

		num3 = num1 - num2;
		while(num3 >= limit)
		{

			// To check +ve nos. in series not to exceed the limit.
			if (num3 > 0)
			{
				new = num3 * -1;
			}

			// To terminate the series if +ve number exceeds the -ve limit.
			if (new < limit)
			{
				break;
			}


			printf("%d\t", num3);
			num1 = num2;
			num2 = num3;

			num3 = num1 - num2;
		}
		printf("\n");
	}

	// Displays the error message if user enters 0 as limit.
	else
	{
		printf("Invalid input!!\n");
	}
	return 0;

}





