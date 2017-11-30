#include <stdio.h>
#include <stdlib.h>

void average(float **p, int n, int *s);
void populate (float **p, int n, int *s);
void memory_allocate(float **p, int n, int *s);
int main()
{
	float *p[3];
	int size[3];
	memory_allocate(p, 3, size);
	populate(p, 3, size);
	average(p, 3, size);
	//
	//printf("");
}

void memory_allocate(float **p, int n, int *s)
{int i;
	for (i = 0; i < n; i++)
	{
		printf("Enter the n value dor %d array\n", i);
		scanf("%d", s + i);

		*(p + i) = malloc((*(s + i) + 1) * sizeof(float));
	}
}

void populate (float **p, int n, int *s)
{int i, j;
	for (i = 0; i < 3; i++)
	{
		printf("Enter %d items\n", *(s + i));
		for (j = 0; j < *(s + i); j++ )
		{
			scanf("%f", *(p + i) + j);
		}
	}
}
void average(float **p, int n, int *s)
{
	int i, j; float sum = 0.0; float avg = 0.0;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < *(s + i); i++)
		{	
			sum = sum + *(p[j] + i);
		}
		*(*p + *(s + j) + 1)= (float)sum / *(s + i);
	}
	printf("%f\n", *(*p + *(s + j) + 1));
}


