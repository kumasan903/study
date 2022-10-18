#include <stdio.h>

int	my_strcmp(const char *x, const char *y)
{
	int	count;

	count = 1;
	while (*x)
	{
		printf("in while(%d) *x: %c\n", count, *x);
		printf("in while(%d) *x: %c\n", count, *y);
		printf("in while(%d) *(const unsigned char*)x: %d\n",
			count, *(const unsigned char*)x);
		printf("in while(%d) *(const unsigned char*)x: %d\n",
			count, *(const unsigned char*)y);
		if (*x != *y)
		{
			break ;
		}
		x++;
		y++;
		count++;
	}
	return (*(const unsigned char *)x - *(const unsigned char *)y);
}

int	main(void)
{
	const char	*x = "abc";
	const char	*y = "abd";
	const int	return_value = my_strcmp(x, y);

	printf("raw x: %s\n", x);
	printf("raw y: %s\n", y);
	printf("return_value: %d\n", return_value);
	return (0);
}
