/*************************************************************************************
Author : Mohammed Harmain 
Title  : Circular right or left shift
Date   : 17/10/17
Description : 
**************************************************************************/
#include <stdio.h>

void dec_bin(unsigned int num);
unsigned int  cir_right(unsigned int num, int shifts);
unsigned int  cir_lrft(unsigned int num, int shifts);
int main()
{  
	unsigned int num;
	int shifts, choice;
	char rep;
do
{
	// Prompt the user to enter the number.
	printf("Enter the integer number : ");
	scanf("%d", &num);

	// Prompt the user to enter the number of shifts.
	printf("Enter the number of shifts : ");
	scanf("%d", &shifts);
		
	// Function call to print the entered number in its binary form.
	 dec_bin(num);


	// Prompt the user to select.
	printf("Choose [1|2]\n1. Circular right shift.\n2. Circular left shift\n:  ");
	scanf("%d", &choice);

	if (1 == choice)
	{
	 int cir = cir_right(num, shifts);
     //	 printf("vvv: %d", cir);
	 dec_bin(cir);

	}
	else
	{
		int left = cir_lrft(num, shifts);
	    //	printf("lll: %d", left);
		dec_bin(left);
	}

printf("do you want to continue..press [Yy | Nn]: ");
scanf("\n%c", &rep);

} while(rep == 'Y' || rep == 'y');

}

// Function definition to convert  decimal to binary.
void dec_bin(unsigned int num)
{
	unsigned int  var;
		for (var = 1 << (sizeof(int) * 8) - 1; var; var >>= 1)
		{
			  (var & num ) ? putchar('1') :putchar('0') ;
		}
	puts("");
}


// Function definition for circular right shift.
unsigned int cir_right(unsigned int num, int shifts)
{
	int Ir;
	Ir = num & ((1 << shifts) - 1);

	return  (num >> shifts) | (Ir << ((sizeof(int) * 8) - (shifts)));
	
	
}

// Function definition for circular left shift.
unsigned int  cir_lrft(unsigned int num, int shifts)
{
	int Ir;
	Ir = ~0 << (sizeof(int) * 8) - (shifts + 1) & num;
	return num << shifts | Ir >> (sizeof(int) * 8) - (shifts + 1);
}





