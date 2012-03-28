#include <stdio.h>

unsigned long atoi(const char *s)
{
	const char *p;
	unsigned long result;

	if (s == NULL)
	{
		return -1;
	}

	p = s;
	result = 0;
	while (*p)
	{
		if (*p < '0' || *p > '9')
		{
			return -1;
		}

		result *= 10;
		result += *p-'0';

		++p;
	}

	return result;
}

int main(void)
{
	const char *s = "987654321";
	printf("result = %ld\n", atoi(s));

	return 0;
}
