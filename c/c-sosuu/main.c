#include <stdio.h>

int main() {
    int yakusuu;
    int i;
    int j;
    for (i=1; i<=100000; i++) {
        yakusuu = 0;
        for (j=1; j<=i; j++) {
            if (i%j==0) {
                yakusuu ++;
            }
        }
        if (yakusuu == 2) {
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}