/**************************************************************************************************************************************************
Author : Mohammed Harmain
Date : 16/10/17
Title : bitwise_lsb.c
Description : To replace the number of bits in number with the value.
 ****************************************************************************************************************************************************/


#include <stdio.h>

int main()
{
	int num, value, pos2, pos1, Iresult, res, res1, result;

	// Prompt the user to enter the num.
	printf("Enter the number: ");
	scanf("%d", &num);

	// Prompt to enter value.
	printf("Enter the value: ");
	scanf("%d", &value);

	// Prompt to enter position2.
	printf("Enter the pos2: ");
	scanf("%d", &pos2);

	// Prompt to enter position1.
	printf("Enter the pos1: ");
	scanf("%d", &pos1);

	// Condition
	if ( 0 <= pos1 <= pos2 <= (sizeof(int) * 8) - 1)
	{

		// Logic 
		Iresult = (~( ~0 << (pos2 - pos1 + 1))) & value;
		res = num  &   ~(~(~0 << (pos2 - pos1 + 1)) << pos1);
		result = (Iresult << pos1) | res;
		printf("%d\n", result);
	}

	return 0;


}
