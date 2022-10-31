#include <stdio.h>

int	calc(int current_alt, int target_alt);

int	main(int argc, char *argv[])
{
	int	current_altitude;
	int	target_altitude;
	int	return_value;

	sscanf(argv[1], "%d", &current_altitude);
	sscanf(argv[2], "%d", &target_altitude);
	return_value = calc(current_altitude, target_altitude);
	printf("Required Distance : %dnm\n", return_value);
	return (0);
}

//	((x-y)*100) / tan(3*(pi/180)) / 6076
int	calc(int current_alt, int target_alt)
{
	int	result;

	result = (current_alt - target_alt) / 3.18;
	return (result);
}
