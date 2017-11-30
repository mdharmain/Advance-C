/*********************************************************************************************************************************************************
Title: Perfect.c
Author: Mohammed Harmain
Date: 5/10/17
Description : To check and print whether the num is perfect or not.
 **********************************************************************************************************************************************************/

#include <stdio.h>

int main()
{
	int sum = 0, num, index;
	char rep;
	do
	{
		//prompt the user to enter the no.
		printf("Enter the no.: ");
		scanf("%d", &num);

		//validating for input.
		if ( num >= 0)
		{

			for (index = 2; index <= num/2; index++)
			{
				if (num % index == 0)
				{
					sum = sum + index;

				}
			}
         
            // Condition to check whether perfect no. or not.
			if (sum + 1 == num)
			{
				printf("%d is a perfect number.\n", num);
			}
			else
			{
				printf("%d is not a perfect number.\n", num);
			}
		}
		else
		{
			printf("Invalid input Try again..\n");
		}
		printf("do you want to continue..Press [Yy | Nn]\n");
		scanf("\n%c", &rep);

	}while (rep == 'y' || rep == 'Y');
}
