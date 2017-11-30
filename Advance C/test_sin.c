#include <stdio.h>

void sine(int teta, int n);
int power(int teta, int n);
int factorial(int n);
int f_3bits(float result);

int main()
{
	int teta,teta1, teta2, teta3, teta4, teta5, teta6,  n;
	//int array[12];

	printf("Enter the theeta value [1-360]\n: ");
	scanf("%d", &teta);

	// Validating for teta.
	if (teta >= 0 && teta <= 360)
	{
		if (teta  % 2 != 0)
		{
			printf("Enter the value of N [1-9]:\n");
			scanf("%d", &n);

			if (n >= 1 && n <= 9)
			{

				sine(teta, n);

				printf("Enter the value of teta1\n:");
				scanf("%d", &teta1);

                // Validating for teta1.
				if (teta1 >= 0 && teta1 <=60)
				{
					sine(teta1, n);
				}
				else
				{
					printf("Teeta1  not in range\n");
				}

			}


			else
			{
				printf("N value is not in range\n");
			}





		}
		else
		{
			printf("Theeta value should be odd\n");
		}
	}
	else
	{
		printf("Theeta value is not in range\n");
	}



}

// function to find the 
void sine(int teta, int n)
{
	int i, j = 0, count = 0;
	float result = 0; 
	int array[12];

	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			j++;

			float pow = power(teta , i);
			int fact = factorial(i);
			if (j   % 2 != 0)
			{

				result+= pow / fact;
			}
			else
			{
				result-= pow / fact;
				printf("reesult: %f\n", result);
			}
		}


	}
	if (result < 0)
	{
		result = result * -1;
	}

	printf("result %d :%f", count, result);
	// To be declared
	int val= f_3bits(result);
	array[count] = val;
	printf("a[0]: %d\n", array[0]);

	count++;
}

// Function to find the power
int power(int teta, int n)
{
	int pow = 1, i;
	for (i = n; i > 0; i--)
	{
		pow = pow * teta;
	}
	printf("power: %d\n", pow);
	return pow;
}

// Function to find the factorial
int factorial(int n)
{
	int i, fact = 1;
	for (i = n; i > 0; i--)
	{
		fact = fact * i;
	}
	printf("factorial : %d\n", fact);
	return fact;
}


int f_3bits(float result)
{
	result*= 1000;
	if (result > 1000)
	{
		result -= 1000;
		return result;
	}
	return result;
}

























