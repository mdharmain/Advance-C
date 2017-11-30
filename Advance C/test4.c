#include <stdio.h>
#include <string.h>
#define PALINDROME 1
#define NOT_PALINDROME -1

int palid(char *p, char *q);
//void rem_space(char *p, char *q, char *s);
int main()
{

	char s[] = "Madam I'm adam";
	//= "MAdam     i'm       adam ";

	int size = strlen(s);
	int i;
	char *p = s;
	char *q = s;

	for (i = 0; i <=  size; i++)
	{
		if (*p == ' ')
		{

			while (*p == ' ')
			{
				p++;
			}
			q++;

			*q = *p;
			*p = ' ';
			q++;
			p++;
			//*(--p)  = *(++p); 
		}
		else
		{
			*q = *p;
			if (p < (s + i))
			{
				q++;
				p++;
			}
		}
	}

	printf("%s\n", s);

	int check_palid = palid(s, (s + (size - 2)));
	if (check_palid == PALINDROME)
	{
		printf("The given string is palindrome\n");
	}
	else
	{
		printf("The given string is not a palidrome\n");
	}
	printf("After converting : %s\n", s);

}
// To check for palindrome.


int palid(char *p, char *q)
{
	//	printf("%c is *p\n", *p);
	int flag = 0;
	//	printf("%c\nis *q", *q);
	while(p < q)
	{ 
		if (*p == ' ' || *q == ' ' || *p == 147 || *q == 147)
		{
			p++;
			q--;
		}
		else
		{
			// to convert upper to lower.
			if (*p >= 65 && *p <= 90)
			{
				*p = *p + 32;
			}
			/*else
			  {
			 *p = *p - 32;
			 }*/
			if (*q >= 65 && *q <= 90)
			{
				*q = *q + 32;
			}
			/*else
			  {
			 *q = *q - 32;
			 }*/
			//

			if (*p == *q)
			{
				p++;
				q--;

				printf("%c is *p\n", *p);
				printf("%c\nis *q", *q);
			}
			else
			{ flag = 1;
				return NOT_PALINDROME;
			}
		}
		if (flag == 0)
		{
			return PALINDROME;
		}
	}
}








