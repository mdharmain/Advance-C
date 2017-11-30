/********************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : Sieve.c
Date   : 12/10/17
Description : To print all the prime numbers in the given range in an array. 
 ********************************************************************************************************************************************************/
#include <stdio.h>
int power (int x, int y);
int main()
{  char rep;
	int limit1, index, index1 ;
	do
	{
		printf("Enter the limit for the array\n");
		scanf("%d", &limit1);


		int pow  = power(2, limit1);


		if (limit1 > 1 && pow > limit1) 
		{	
			int prime_array[limit1];
			prime_array[0] = 1;
			prime_array[1] = 1;

			// Filling the array with same index numbers.
			for (index = 2; index < limit1; index++)
			{
				prime_array[index] = index;
			}

			// To fill multiples with zero.
			for (index = 2; index < limit1; index++)
			{
				for (index1 = index; index1 < limit1; index1++)
				{
					if ((index * index1) < limit1)
					{
						prime_array[(index * index1)] = 'x';
					}
				}
			}

			// To print the prime numbers.
			printf("The prime numbers b/w 2 to %d are :\n", limit1);

			for (index = 2; index < limit1; index++)
			{
				if (prime_array[index] != 'x' )//&& prime_array[index] != 120)
				{
					printf(" a[%d]:%d\n",index, prime_array[index]);
				}
			}

		}
		else
		{
			printf("The array limit should be < 2^20 ");
		}



		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);

	} while(rep == 'Y' || rep == 'y');

}

// Function to find the power.
int power(int x, int y )
{ int a = 1; 
	while(y != 0)
	{
		a = a * x ;
		y--;
	}
	return a;
}











