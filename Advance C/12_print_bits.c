/*************************************************************************************
Author :Mohammed Harmain 
Title  :Print_bits.c
Date   : 17/10/17
Description : To print all the bits of the entered number.
 **************************************************************************/
#include <stdio.h>

int main()
{  char rep;

	int num, n, loc;
	unsigned int mask;
	do
	{
		// Prompt the user to enter.
		printf("Enter the number : ");
		scanf("%d", &num);

        // loop to print all the bits.
		for (mask = 1 << ((sizeof(int) << 3) -1); mask ; mask >>= 1)
		{
			num & mask ? putchar ('1'): putchar ('0');
		}
		putchar('\n');



		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while(rep == 'Y' || rep == 'y');

}
