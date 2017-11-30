/*****************************************************
Title      : to delete the characters present in the string1 those are present in string2
Author      : Mohammed Harmain
Date        : 13/11/17
Description : to delete the characters present in  the strinig1 those are present in the string2
*******************************************************/

#include <stdio.h>
#include <string.h>

//declare the prototypes of the functions
void squeeze(char *str1, char *str2, int len, int len1);

int main()
{
	//declare the variables
	int len, len1;
	char str1[20], str2[20];

	//prompt the user to enter the strings
	printf("entr the first string\n");
	scanf("%[^\n]s", str1);

	printf("enter the second string\n");
	scanf("\n%[^\n]s", str2);

	//calculate the length of the two strings
	len = strlen(str1);
	len1 = strlen(str2);

	//call the function
	squeeze(str1, str2, len, len1);
	printf("string after the squeezing : %s\n", str1);
}

//define the function
void squeeze(char *str1, char *str2, int len, int len1)
{
	int i, j, k;
	for (i = 0; i < len1; i++)
	{
		//run the loop to check for the characters present in the string1
		for (j = 0; j < len; j++)
		{
			//check the characters present in the string 1
			if (*(str2 + i) == *(str1 + j))	
			{
				for (k = j; k < len; k++)
				{
					//replace the current characters with next characters
					*(str1 + k) = *(str1 + (k+1)); 	
				}
			}
		}
	}
}
