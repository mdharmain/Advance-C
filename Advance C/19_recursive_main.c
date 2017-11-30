/*********************************************************************************************************************************************************
Author : Mohammed Harmain 
Title  : recursive_main
Date   : 
Description : To find the factorial of the given number using only the main function recursively.
 *********************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	static int status = 1, fact = 1, num, temp;
	if (status)
	{
		
		printf("Enter the number : ");
		scanf("%d", &num);
	

		if (num < 0)
		{
			printf("The input is Invalid..!\n");
			exit(1);
		}
		else if(num == 0 || num == 1)
		{
			printf("The factorial of %d : 1\n", num);
			exit(2);
		}
	status = 0;

	temp = num;
	}



		fact = fact * num;
		num--;
		if (num != 0)
		{	main();
		}

		//result = num * main(num - 1);
		
	printf("The factorial of  : %d\n", fact);
		exit(3);
	
	//printf("The factorial of  : %d\n", num);



}









