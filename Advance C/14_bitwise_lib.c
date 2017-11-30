/*************************************************************************************
Author : Mohammed Harmain 
Title  : bitwise_lib.c
Date   : 17/10/17
Description : To implement the bitwise functions.
 **************************************************************************/
#include <stdio.h>

int get_nbits(int num, int n);
int replace_nbits(int num, int n, int val);
int get_nbits_from_pos(int num, int n, int pos);
int replace_nbits_from_pos(int num, int n, int pos, int val);
int toggle_bits_from_pos(int num, int n, int pos);
void print_bits(unsigned int num, int n);

int main()
{
	int choice, num, n, pos, val, result;
	unsigned int num1;
	char rep;

	do{
		// Prompt the user to enter the option.
		printf("Select bit operation from the below list :\n1. get_nbits\n2. set_nbits\n3. get_nbits_from_pos\n4. set_nbits_from_pos\n5. toggle_bits_from_pos\n6. print_bits\n");

		scanf("%d", &choice);

		switch(choice)
		{
			case 1: 
				printf("Enter the num : ");
				scanf("%d", &num);

				printf("Enter the n value : ");
				scanf("%d", &n);

				result = get_nbits(num,  n);
				printf("The value is : %d\n", result);
				break;

			case 2:
				printf("Enter the num : ");
				scanf("%d", &num);
				
				printf("Enter the n value : ");
				scanf("%d", &n);

				printf("Enter the  value : ");
				scanf("%d", &val);

				result = replace_nbits(num, n, val);
				
				printf("The value is : %d\n", result);
				break;

			case 3:
				printf("Enter the num : ");
				scanf("%d", &num);
				
				printf("Enter the n value : ");
				scanf("%d", &n);

				printf("Enter the  position : ");
				scanf("%d", &pos);

				result = get_nbits_from_pos(num,  n, pos);

				printf("The value is : %d\n", result);
				break;

			case 4:
				printf("Enter the num : ");
				scanf("%d", &num);
				
				printf("Enter the n value : ");
				scanf("%d", &n);

				printf("Enter the  position : ");
				scanf("%d", &pos);
				
				printf("Enter the  value : ");
				scanf("%d", &val);

				result = replace_nbits_from_pos(num,  n,  pos, val);
				printf("The value is : %d\n", result);
				break;

			case 5:
				printf("Enter the num : ");
				scanf("%d", &num);
				
				printf("Enter the n value : ");
				scanf("%d", &n);

				printf("Enter the  position : ");
				scanf("%d", &pos);
				
				//printf("Enter the  value : ");
				//scanf("%d", &val);
				result = toggle_bits_from_pos(num, n, pos);
				printf("The value is : %d\n", result);
				break;

			case 6:
				printf("Enter the num : ");
				scanf("%d", &num);

				do
				{
					printf("Enter the N-bit[1-32]: ");
					scanf("%d", &n);
				} while(n > (sizeof(int) * 8));
				
				print_bits(num, n);
				break;

			default : printf("Invalid entry..!\n");
		}




		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while(rep == 'Y' || rep == 'y');

}



// Function to get_bits.
int get_nbits(int num, int n)
{
	return ~(~0 << n) & num;
}


// Function to replace bits.
int replace_nbits(int num, int n, int val)
{
	return ~0 << n & num | val & ~(~0 << n);
}


// Function to get nbits from position.
int get_nbits_from_pos(int num, int n, int pos)
{
	return ((~(~0 << pos + 1) & (~0 << n - 1)) & num) >> n - 1;
}

// Function to replace nbits from position.
int replace_nbits_from_pos(int num, int n, int pos, int val)
{
	return ((val & ((1 << n) - 1)) << pos - n + 1) | (num & ~((~(~0 << n)) << pos - n + 1));
}

// Function def
int toggle_bits_from_pos(int num, int n, int pos)
{
	return (num ^ (((1 << n) - 1) << pos - n + 1));
}
// Function def
void print_bits(unsigned int num, int n)
{
	unsigned mask;
	putchar('(');
	for (mask = (1 << (sizeof(int) * 8 - 1)); mask; mask >>= 1)
	{
		if (mask <= ((1 << n) - 1))
		{
			if (num & mask)
			{
				putchar('1');
			}
			else
			{
				putchar('0');
			}
		}
	}
	putchar(')');
	puts("");


}




