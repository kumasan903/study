#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int	anser;
	int	input_number;

	srand((unsigned int)time(NULL));
	anser = 1 + rand() % 100;
	puts("guess the number!!(1~100)");
	while (1)
	{
		scanf("%i", &input_number);
		if (anser > input_number)
		{
			puts("your value is small!");
		}
		else if (anser < input_number)
		{
			puts("your value is big!");
		}
		else
		{
			puts("correct!!");
			break ;
		}
	}
	return (0);
}
