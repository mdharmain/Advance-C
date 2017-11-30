/*************************************************************************************
Author : Mohammed Harmain
Title  : x_format
Date   :5/10/17
Description : To print the word HELLO in x format for enen and odd number of lines.
**************************************************************************************/

#include <stdio.h>

int main()
{
	int num, count, i, j;

	// Prompt the user to enter
	printf("Enter the number: ");
	scanf("%d", &num);

	// For odd number.
	if (num % 2 != 0)
	{
		count =  num;

		//loop to print hello.
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <=  num; j++)
			{


				if ((i == j) || (j == count))
				{

					if(i == num / 2 + 1)
					{ printf(" HELLO");
					}
					else
					{
						printf("HELLO");
					}
				}
				else
				{
					printf("  ");
				}
			}
			count--;
			printf("\n");
		}
	}

	// For even number.
	else
	{
		count =  num ;

		//loop to print hello.
		for (i = 1; i <= ( num); i++)
		{
			for (j = 1; j <= ( num); j++)
			{


				if (i == j || j == count)
				{

					if(i == num / 2 || i == num / 2 + 1)
					{ printf("  HELLO");
						break;
					}
					else
					{
						printf("HELLO");
					}
				}
				else
				{
					printf(" ");
				}
			}
			count--;
			printf("\n");
		}

		/*
		   count =  num + 1;
		   for (i = 1; i <= (num); i++)
		   {
		   if (i == count)
		   {
		   printf("HELLO");
		   }
		   for(j = 1; j <= ( num); j++)
		   {
		   if (i == j || i == count)
		   {
		   if (num )
		   printf("HELLO");
		   }
		   else
		   {
		   printf(" ");
		   }
		   }
		   count--;
		   printf("\n");
		   }


		   for (i = num; i <= ( num - 2); i++)
		   {
		   for (j = 1; j <= (num - 3); j++)
		   {
		   if (i == (j - 1) || count == j)
		   {
		   printf("HELLO");
		   }
		   else
		   {
		   printf(" ");
		   }
		   }
		   count--;
		   printf("\n");
		   }*/
	}


	return 0;

}
