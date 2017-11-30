/*************************************************************************************
Author :Mohammed Harmain 
Title  :
Date   :
Description :
**************************************************************************/
#include <stdio.h>

int main()
{  char rep;
	int choice, size, i;
	float key;
do{
	printf("1. char\n2. int\n3. float"\
	"4. double"\
	"5. strings");	

	scanf("%d", &choice);

	switch(choice)
	{
		case 4 : 
			printf("Enter the array size ");
			scanf("%d", &size);

			float *p = malloc(size * sizeof(float));

			for (i = 0; i < size; i++)
			{   scanf("%f", p + i);
				printf("enter a[%d] : %f\n", *(p + i));
			}
			printf("Enter the key to search\n");
			scanf("%f", &key);
			int (*compare)(const void*, const void*) = comp;
			float *q = generic_search(&key, p, size, sizeof(float), (*compare));
			printf("key found :%d\n", *q);
			break;
	}






printf("do you want to continue..press [Yy | Nn]: ");
scanf("\n%c", &rep);
}while(rep == 'Y' || rep == 'y');

}

int 
voi




