#include <stdio.h>

int	main(void)
{
	int	divisor;
	int	i;
	int	j;

	i = 1;
	while (i <= 100000)
	{
		divisor = 0;
		j = 1;
		while (j <= i)
		{
			if (i % j == 0)
			{
				divisor ++;
			}
		}
		if (divisor == 2)
		{
			printf("%d\n", i);
		}
	}
	printf("\n");
	return (0);
}
