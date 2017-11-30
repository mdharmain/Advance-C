/************************************************************************************************
Title:To print the mean of different type
Author:K Rakshith Rao
Date :11/11/2017
Description:This program is used to print the mean
 ************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void populate(void *array, int n, int option);
double mean(void *array, int n, int option);

int main()
{
	int n, option;
	double result;

	//prompt the user to  enter the size
	printf("enter the number of elements\n");
	scanf("%d", &n);

	//prompt the user to enter the choice
	printf("enter the choice\n1.int\n2.short\n3.float\n4.double\n");
	scanf("%d", &option);
	
	int *ar = calloc(n, sizeof(int));
	double *darray = calloc(n,sizeof(double));
	float *farray = calloc(n,sizeof(float));
	short int *array = calloc(n ,sizeof(short));
	//switch statement for the option
	switch(option)
	{
		case 1:
			populate(ar, n, option);
			result = mean(ar, n, option);
			break;

		case 2:
			populate(array, n, option);
			result = mean(array, n, option);
			break;


		case 3:
			populate(farray, n, option);
			result = mean(farray, n ,option);
			break;


		case 4:
			populate(darray, n, option);
			result = mean(darray, n, option);
			break;

		default:
			printf("Inavalid option");
			return 0;
	}
	printf("The mean is :%lf \n", result);
	return 0;
}
void populate(void *array, int n, int option)
{
	//definition
	int i;
	printf("Enter the elements\n");
	switch (option)
	{
		case 1:
			for( i = 0; i < n; i++)
			{
				scanf("%d",((int *)array + i));
			}
			break;
		case 2:
			for ( i = 0; i < n; i++)
			{
				scanf("%hu",((short *)array + i));
			}
			break;
		case 3:
			for( i = 0; i < n; i++)
			{
				scanf("%f", ((float *)array + i));
			}
			break;
		case 4:
			for ( i = 0; i < n; i++)
			{
				scanf("%lf", ((double *)array + i));
			}

	}
}
double mean(void *array, int n, int option)
{
	//for finding mean
	int i;
	double sum = 0;
	switch (option)
	{

		case 1:
			for( i = 0; i < n; i++)
			{
				sum += *((int *)array + i);
			}
			break;
		case 2:
			for ( i = 0; i < n; i++)
			{
				sum += *((short *)array + i);
			}
		case 3:
			for( i = 0; i < n; i++)
			{
				sum += *((float *)array + i);
			}
			break;
		case 4:
			for ( i = 0; i < n; i++)
			{
				sum += *((double *)array + i);
			}

			
	}
			return sum / n;
}

