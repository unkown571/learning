#include <stdio.h>

int atoi(const char *s)
{
	const char *p;
	int result;

	if (s == NULL)
	{
		return 0;
	}

	p = s;
	result = 0;
	while (*p)
	{
		if (*p < '0' || *p > '9')
		{
			break;
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
	printf("result = %d\n", atoi(s)); /* 987654321 */

	const char *s2 = "98ab54321";
	printf("result = %d\n", atoi(s2)); /* 98 */

	const char *s3 = "k83x54321";
	printf("result = %d\n", atoi(s3)); /* 0 */

	const char *s4 = "";
	printf("result = %d\n", atoi(s4)); /* 0 */

	const char *s5 = NULL;
	printf("result = %d\n", atoi(s5)); /* 0 */

	return 0;
}
