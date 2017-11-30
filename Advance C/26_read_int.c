/***********************************************************************************************************************************************************
Author :Mohammed Harmain 
Title  :read_int.c
Date   :09/11/17
Description : To read and print the number withot using the scanf function.
*************************************************************************************************************************************************************/
#include <stdio.h>

int main()
{  char rep;
	char ch = 0;
	int i = 0;
	int flag = 0;
	int flag1 = 0;
	//char *p;
	do{
//	fseek(stdin, 0, SEEK_END);
	while ((ch = getchar()) != '\n' )
	{//	ch = getchar();

			if (ch >= 'a' &&  ch <= 'z' || ch >= 'A'  && ch <= 'Z')
			{
				flag = 1;
				__fpurge(stdin);
				break;
			}
			if (ch == '-')
			{
				putchar('-');
			}
			if (ch >= 48 && ch <= 57)
			{
				 i = ch - 48;
				flag1 = 1;				

				printf("%d", i);

			}
	} 
			if (flag == 1 && flag1 == 0)
			{
				putchar('0');
			}


			printf("\n");
//	ch = 'A';		
		/*printf("Enter the number : ");
	//	printf("%d\n", *p);
	    fgets(num, 4, stdin);


	//	puts(num);
		printf("The entered number is %s\n", num);


*/

		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	//	getchar();
	__fpurge(stdin);
	}while(rep == 'Y' || rep == 'y');

}
