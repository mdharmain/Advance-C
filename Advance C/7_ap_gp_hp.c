/*************************************************************************************
Author : Mohammed Harmain 
Title  :Ap, Gp, Hp
Date   : 9/10/17
Description : To find AP, GP, HP series.
 **************************************************************************/

#include <stdio.h>

int main()
{
	int first_no, diff, limit, gp, i, c_ratio, choice;
	double hp;
	char rep;
	do 
	{
		//prompt the user.
		printf("Choose the option:\n1. AP\n2. GP\n3. HP\n   ");
		scanf("%d", &choice);

		switch (choice)
		{
			//To find Arithmetic progression.
			case 1:
				do
				{
					printf("Enter the first no[-ve no not allowed]: ");
					scanf("%d", &first_no);
				} while (first_no < 0);

				do
				{
					printf("Enter the common diff no[-ve no not allowed]: ");
					scanf("%d", &diff);
				} while (diff < 0);
				do
				{
					printf("Enter the limit: ");
					scanf("%d", &limit);
				}while (limit < first_no);

				printf("AP series is : ");
				for (i = first_no; i <= limit; i = i + diff)
				{
					printf("%d  ", i);

				}
				printf("\n");
				break;

				// To find Harmonic progression.
			case 3:
				do
				{
					printf("Enter the first no[-ve no not allowed]: ");
					scanf("%d", &first_no);
				} while (first_no < 0);

				do
				{
					printf("Enter the common diff [-ve no not allowed]: ");
					scanf("%d", &diff);
				} while (diff < 0);
				do
				{
					printf("Enter the limit: ");
					scanf("%d", &limit);
				}while (limit < first_no);

				printf("HP series is : ");
				for (i = first_no; i <= limit; i = i + diff)
				{
					hp = 1.0 / i;
					printf("%lf  ", hp);


				}
				printf("\n");
				break;

				// To find Geometric progression.	
			case 2:
				do
				{
					printf("Enter the first no[-ve no not allowed]: ");
					scanf("%d", &first_no);
				} while (first_no < 0);

				do
				{
					printf("Enter the common ratio [-ve no not allowed]: ");
					scanf("%d", &diff);
				} while (diff < 0);
				do
				{
					printf("Enter the limit: ");
					scanf("%d", &limit);
				}while (limit < first_no);

				printf("GP series is : %d ", first_no );
				gp = first_no;
				for (i = first_no; i <= limit; i++ )
				{

					gp = gp * diff;
					if(gp >=0 &&  gp <= limit )
					{
						printf("%d ", gp);
					}


				}
				printf("\n");
				break;
		}
		printf("do you want to continue..press [Yy | Nn]: ");
		scanf("\n%c", &rep);
	}while ( rep == 'Y' || rep == 'y');

}
