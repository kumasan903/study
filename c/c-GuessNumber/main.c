#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    // 乱数の生成
    int anser;
    srand((unsigned int)time(NULL));
    anser = 1 + rand() % 100;
    //int anser = 50;
    int input_number;
    printf("数を当ててごらん(1～100)\n");
    scanf("%i",&input_number);
    for ( ; ; ) {
        if ( anser > input_number ) {
            printf("もっと大きいよ\n");
            scanf("%i",&input_number);
        } else if ( anser < input_number ) {
            printf("もっと小さいよ\n");
            scanf("%i",&input_number);
        } else if ( anser == input_number ) {
            printf("正解！\n");
            break;
        } else {
            printf("Error\n");
            scanf("%i",&input_number);
        }
    }
}