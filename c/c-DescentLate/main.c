#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int Ground_Speed;
    sscanf(argv[1], "%d", &Ground_Speed);
    int a = round(Ground_Speed * 5.24);
    printf("Descent Late : %dfpm\n",a);
}
