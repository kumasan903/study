#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int Current_Altitude;
    int Target_Altitude;

    sscanf(argv[1], "%d", &Current_Altitude);
    sscanf(argv[2], "%d", &Target_Altitude);

    double Required_distance = (Current_Altitude * 100 - Target_Altitude * 100) / tan(3 * (M_PI/180)) / 6076;
    int a = round(Required_distance);
    printf("Required Distance : %dnm\n", a);
}