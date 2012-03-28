#include	<stdio.h>
#include	<string.h>

int is_palindrome(const char *s, size_t length)
{
	if (length <= 0)
		return -1;
	int i;
	for (i = 0; i < length / 2; ++i)
		if (s[length / 2 -1 - i] != s[(length + 1)/ 2 + i])
			break;
	if (i >= length / 2)
		return 1;
	return 0;
}

int main(void)
{
	int N = 10;
	int i;
	char str[N];
	srand(time(NULL));
	for (i = 0; i < N - 1; ++i)
	{
		if (random() % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
	}
	str[N-1] = '\0';
	printf("str = %s\n", str);

	size_t len = N - 1;
	char *p = str;
	int cut = 0;
	while (*p)
	{
		cut  = len - cut;
		while (cut > 0 && is_palindrome(p, cut) != 1)
			--cut;
		printf("%d\t", cut);
		p = p + cut;
	}
	printf("\n");

	return 0;
}
