/********************************************************************
Title:To Reverse the string
Author:mohammed HARmain
Date:12/11/17
Description:To reverse the string which is given
********************************************************************/

#include <stdio.h>
#include <string.h>

void reverse(char *);
int recursion(char *, size_t);

int main()
{
	size_t count;
	char str[50], i = 0, j;
	char option;
	do
	{


	//Prompt the user to enter the string
	printf("Enter the string\n");

	//Read the string
	scanf("%[^\n]", str);

	count = strlen(str) - 1;

	printf("%d\n", count);
	j = count;

	while (j != (-1))
	{
		reverse(str + j);
		j--;
	}
	putchar('\n');

	j = count;

	recursion(str, count);
	putchar('\n');
	
	printf("Want to continue...press[Yy/Nn\n");
	scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');
	return 0;
}

void reverse(char *j)
{
	printf("%c", *j);
}

int recursion(char *j, size_t i)
{
	if(i == -1)
	{
		return 0;
	}
	printf("%c", *(j + i));
	recursion(j, --i);
}
