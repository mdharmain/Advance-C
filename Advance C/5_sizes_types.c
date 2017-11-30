/***********************************************************************************************************************************************************
Author : Mohammed Harmain
Title  : 5_Sizes_types.c
Date   : 4/10/2017
Description : To print sizes of all the datatypes including the modifiers
***********************************************************************************************************************************************************/


#include <stdio.h>

int main()
{
	//size of char datatype with and without sign modifiers.
	printf("sizeof(char):%zu\n", sizeof(char));
	printf("sizeof(signed char):%zu\n", sizeof(signed char));
	printf("sizeof(unsigned char):%zu\n\n", sizeof(unsigned char));

	//size of int datatype with and without sign modifiers.
	printf("sizeof(int):%zu\n", sizeof(int));
	printf("sizeof(signed int):%zu\n", sizeof(signed int));
	printf("sizeof(unsigned int):%zu\n\n", sizeof(unsigned int));

	//size of int datatype with size modifiers.
	printf("sizeof(short int):%zu\n", sizeof(short int));
	printf("sizeof(long int):%zu\n", sizeof(long int));
	printf("sizeof(long long int):%zu\n\n", sizeof(long long int));

	//size of int datatype with sign and size modifiers.
	printf("sizeof(signed short int):%zu\n", sizeof(signed short int));
	printf("sizeof(unsigned short int):%zu\n", sizeof(unsigned short int));
	printf("sizeof(unsigned long int):%zu\n", sizeof(unsigned long int));
	printf("sizeof(signed long int):%zu\n", sizeof(signed long int));
	printf("sizeof(signed long long int):%zu\n", sizeof(signed long long int));
	printf("sizeof(unsigned long long int):%zu\n", sizeof(unsigned long long int));

	//size of float and double
	printf("sizeof(float):%zu\n", sizeof(float));
	printf("sizeof(double):%zu\n", sizeof(double));
	printf("sizeof(long):%zu\n", sizeof(long));
	printf("sizeof(long double):%zu\n", sizeof(long double));

return 0;

}
