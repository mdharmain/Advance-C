#include <stdio.h>
#include <stdarg.h>

void xprintf(const char *format, ...);

int main()
{
	char ch = 'A';

	xprintf("The value of ch : %c\n", ch);

	int i = 10;
	xprintf("The value of i : %d\n", i);

	float f = 1.23;
	xprintf("The value of f: %f\n", f);

	double d = 1.32111111114;
	xprintf("The value of d : %lf\n", d);
}

void xprintf(const char *format, ...)
{
	char ch;
	const char *p = format;
	char buffer[30] = {'\0'};
	int i;
	float j = 0.0;
	double k;
	va_list ap;

	va_start(ap, format);

	while(*p)
	{
		if (*p == '%')
		{
			switch(*++p)
			{
				case 'c':
					ch = (char)va_arg(ap, int);
					putchar(ch);
					break;

				case 'd':
					i = va_arg(ap, int);
					sprintf(buffer, "%d", i);
					fputs(buffer, stdout);
					break;
				case 'f':
					j = (float)va_arg(ap, double);
					sprintf(buffer, "%f", j);
					fputs(buffer, stdout);
					break;
				case 'l':
					switch(*++p)
					{
					case 'f':
					k = va_arg(ap, double);
					sprintf(buffer, "%lf", k);
					fputs(buffer, stdout);
					break;
					}
			}
			}
			else
			{
				putchar(*p);
		}
		p++;
	}
	va_end(ap);
}







