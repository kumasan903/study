#include <stdio.h>

int	triple(int value);

int	main(void)
{
	int	return_value;

	return_value = triple(3);
	printf("%d\n", return_value);
	return (0);
}

int	triple(int value)
{
	return (value * 3);
}
