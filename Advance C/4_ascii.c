/***************************************************************************************************************************************************
Author : Mohammed Harmain
Title  : Printable_Ascii
Date   : 4/10/17
Description : To print all the printable AScii characters.
****************************************************************************************************************************************************/

#include <stdio.h>

int main()
{
	int index;

	printf("Octal  Hex  Dec  Char\n");
	
	//for loop to print Acsii characters from dec 33 to 126.
	for (index = 33; index <= 126; index++)
	{
		printf("%o    %X    %d    %c\n", index, index, index, index);
	}

	return 0;
}
