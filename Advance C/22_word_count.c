/*******************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : word_count
Date   : 3/11/17
Description : To print the no. of lines, no. of words and number of characters similar to wc command in terminal
 *****************************************************************************************************************************************************/
#include <stdio.h>

int main()
{  char s[100];
	
	char rep;
	do{
		int i, temp, lines = 0;
		printf("Enter the characters: \n");
		for (i = 0; i < 100; i++)
		{
			scanf("%c", &temp);

			if (temp == EOF)
			{
				break;
			}
			else
			{
				*(s + i) = temp;

				if (*(s + i) == '\n')
				{ lines++;

			}
		}







		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while(rep == 'Y' || rep == 'y');

}
