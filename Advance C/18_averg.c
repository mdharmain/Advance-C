/*************************************************************************************
Author :Mohammed Harmain 
Title  :average.c
Date   :24/10/17
Description : To find the average of an array.
 **************************************************************************/
#include <stdio.h>

void populate_array(int *a, int limit);

float average(int *a, int limit);

int main()
{  char rep;
	do{
		int limit, i;
		// Prompt to enter the limit.
		printf("Enter the size of the array: ");
		scanf("%d", &limit);

		int a[limit];

		// Function calls.
		populate_array(a, limit);

/*		// Print the array.
		for (i = 0; i < limit; i++)
		{
			printf("a[%d] = %d\n", i, *(a + i));
		}*/

		float avg = average(a, limit);

		printf("The average of array elements is : %f\n", avg);





		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while(rep == 'Y' || rep == 'y');

}

// Function defination to populte.		
void populate_array(int *a, int limit)
{		//populate the array
	int i;
	printf("Enter the elements the array: \n");
	for (i = 0; i < limit; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", a + i);
	}
}

// Function defination to calculate the average.
float average(int *a, int limit)
{
	int sum = 0, i;
	for (i = 0; i < limit; i++)
	{
		sum = sum + *(a + i);
	}

	return  (float)sum / limit;
}


