/****************************************************************************************************************************
Author :Mohammed Harmain 
Title  :Bits_even_odd.c
Date   :12/10/17
Description :To find out whether the given number is even or odd using bitwise operators
 *****************************************************************************************************************************/
#include <stdio.h>

int main()
{  
	unsigned int num;
	char rep;

	do{
		//Prompt the user to enter a number.
		printf("Enter the number to check: ");
		scanf("%d", &num);

		// Left shift operation to shift LSB to MSB position.
		num =  num << ((sizeof(int) * 8) - 1);

		// Again Right shift operation to shift MSB to LSB position.
		num >> ((sizeof(int) * 8) - 1);

		//Condition to check.
		if (num == 0)
		{
			printf("The number is  Even\n");
		}
		else
		{
			printf("The number is Odd\n");
		}


		// To repeat.
		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);

	} while(rep == 'Y' || rep == 'y');

	return 0;

}
