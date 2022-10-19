#include <stdio.h>
#include <math.h>

int	main(int argc, char *argv[])
{
	int	ground_speed;
	int	a;

	sscanf(argv[1], "%d", &ground_speed);
	a = ground_speed * 524 / 100;
	printf("Descent Late : %dfpm\n", a);
}
