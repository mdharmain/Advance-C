#include <stdio.h>
#include <stdlib.h>

void display_details(void);
float mean (char **base);

float median (char **base, int count);
int main(int argc, char *argv[])
{
	int count = 0;
	if (argc == 2)
	{
		if (*(argv[1] + 1) == 'h')
		{
			display_details();
			exit(1);
		}
	}
   else if (argc < 3)
   {
   	   printf("Insufficient arguments\n");
   	   printf("Type -h for more details\n");
   	   exit(2);
   }

   switch (*(argv[1] + 1))
   {
   	   case 'm':
				printf("Mean: %f\n", mean(argv + 2));
				break;

		case 'M':
			 count = argc - 2;
			
			float med = median(argv + 2, count);
			printf("The median is : %f\n", med);
			break;
				
   }
}


   void display_details(void)
   {
   	   printf("usage : ./m_m <option> <input>\n");
   	   printf("Options : \n");
   	   printf("-m : To find mean\n");
   	   printf("-M : To find Median\n");
   }

	float mean (char **base)
	{	int i, sum = 0;
		for (i = 0; *(base + i); i++)
		{
			sum = sum + atoi(*(base + i));
		}
		return (float)sum / i;
	}


  float median (char **base, int count)
  {  float median = 0.0; int i , j;
  	  if (count % 2 != 0)
	  {
	  	  count = count / 2;
			median =  atoi(*(base + count));
			return median;
	  	  
	  }
	else
	{	i =  atoi(*(base + count / 2));
		j = atoi(*(base + (count / 2) - 1));
		printf("%d %d\n", i, j);
		return  ((float)(i + j) / 2);


  }
  }
		 



