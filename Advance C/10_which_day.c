/********************************************************************************************************************************************
Author :Mohammed Harmain 
Title  :which_day.c
Date   :13/10/17
Description : To find which day will fall after the given number of days, given the start day
 ********************************************************************************************************************************************/
#include <stdio.h>

int main()
{  
	char rep;
	int days, start_day, rem, n_day;


	do{
		// Prompt the user to enter.
		do
		{
			printf("Enter the number of days [1-365] : ");
			scanf("%d", &days);
		} while( days < 1 || days > 365);

		do
		{
			printf("Choose first day : \n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
			printf("Enter the option to set the first day : ");
			scanf("%d", &start_day);
		} while(start_day > 7 || start_day < 1);


		// Remaining days from complete weeks.
		rem = days % 7;
		n_day = start_day + rem;

		if (n_day > 7)
		{
			n_day = n_day % 7;
		}


		// Selecting the nth day.
		switch (n_day)
		{
			case 2 : printf("The %dth day is Monday\n", days); 
					 break;

			case 3 : printf("The %dth day is Tuesday\n", days);
					 break;


			case 4 : printf("The %dth day is Wednesday\n", days); 
					 break;


			case 5 : printf("The %dth day is Thursday\n", days); 
					 break;

			case 6 : printf("The %dth day is Friday\n", days); 
					 break;

			case 7 : printf("The %dth day is Saturday\n", days); 
					 break;


			case 1 : printf("The %dth day is Sunday\n", days); 
					 break;

			default : printf("Try again..!!\n");
		}


		printf("do you want to continue..press [Yy | Nn]: \n");
		scanf("\n%c", &rep);

	} while(rep == 'Y' || rep == 'y');

}



