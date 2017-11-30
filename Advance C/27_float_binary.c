/*************************************************************************************
Author :Mohammed Harmain 
Title  :
Date   :
Description :
 **************************************************************************/
#include <stdio.h>

void print_bits_void_ptr(void *p, size_t n);
 void print_bits_1(int num, int n);
 void print_bits(int num, int n);
int main()
{  char rep;
	float f;
	do
	{
	// Prompt the user to enter the value.
	printf("Enter thye float value :");
	scanf("%f", &f);

	int *p = (int*)&f;


     print_bits(*p,  sizeof(float) * 8);
	
	print_bits_void_ptr((&f + 1), sizeof(float));
		






		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while(rep == 'Y' || rep == 'y');

}

void print_bits_void_ptr(void *p, size_t n)
{ int i;
p = p - 1;
	for (i = 0; i < n; i++)
	{
		print_bits_1(*(char*)p, 1);
		p = p - 1;
	}

}


 void print_bits(int num, int n)
  {
 	 	unsigned int mask;
 	 	for (mask = 1 << ((sizeof(int) * 8) - 1);  mask; mask>>=1)
		{
			num & mask? putchar('1') : putchar('0');
		}
  }
 void print_bits_1(int num, int n)
  {
 	 	unsigned int mask;
 	 	for (mask = 1 << (sizeof(char) * 8) - 1;  mask; mask>>=1)
		{
			num & mask? putchar('1') : putchar('0');
		}
  }

