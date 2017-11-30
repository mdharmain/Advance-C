/******************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : Median.c
Date   : 13/10/17
Description : To find the median in 2 arrays.
 *****************************************************************************************************************************************************/
#include <stdio.h>

int main()
{  
	char rep;
	int index1, index2, i ,j ,temp, var0, var1;
	//int a[IND1], b[IND2];
	float median, median1, med;
	do{
		// Validating for size of array1.
		do
		{
			printf("Enter the size of Array1 [< 10]: ");
			scanf("%d", &index1);
		} while (index1 >= 10);

		int a[index1];
		// Validating for size of array2.
		do
		{
			printf("Enter the size of Array2 [< 10]: ");
			scanf("%d", &index2);
		} while (index2 >= 10);

		int b[index2];
		// To store the array1 elements.
		printf("Enter the elements of Array1: \n");
		for (i = 0; i < index1; i++)
		{
			printf("Enter a[%d] = ", i);
			scanf("%d", &a[i]);
		}

		// To store the array2 elements.
		printf("Enter the elements of Array2: \n");
		for (i = 0; i < index2; i++)
		{ 
			printf("Enter b[%d] = ", i);
			scanf("%d", &b[i]);
		}

		// Sorting the array1.
		for (i = 0; i < index1; i++)
		{
			for (j = i; j < index1; j++)
			{
				if (a[j] < a[i])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}


		// Sorting the array2.
		for (i = 0; i < index2; i++)
		{
			for (j = i; j < index2; j++)
			{
				if (b[j] < b[i])
				{
					temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}

		// For Array1. 
		// If the size of array1 is odd.
		if ( index1 % 2 != 0)
		{
			i = 0;
			j = index1 - 1;
			do
			{
				if (i == j)
				{
					median = a[i];
				}
				i++;
				j--;
			} while (i <= j);
		}

		// If the size of array1 is even. 
		else
		{
			median = (float)(a[index1 / 2] + a[(index1 / 2) - 1]) / 2;
		}	
		printf("%f\n", median);

		// For Array2. 
		// If the size of array2 is odd.
		if ( index2 % 2 != 0)
		{
			i = 0;
			j = index2 - 1;
			do
			{
				if (i == j)
				{
					median1 = b[i];
				}
				i++;
				j--;
			} while (i <= j);
		}

		// If the size of array2 is eveen.
		else
		{
			median1 = (float)(b[index2 / 2] + b[(index2 / 2) - 1]) / 2;
		}	
		printf("%f\n", median1);

		// Evaluating the final median.
		med = (median + median1) / 2;

		printf("The median is : %f\n", med);

		printf("do you want to continue..press [Yy | Nn]: \n");
		scanf("\n%c", &rep);

	}while(rep == 'Y' || rep == 'y');

	return 0;
}



