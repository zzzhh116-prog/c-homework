#include <stdio.h>

int main() {
    int random=0;
    int N=0;
    int guess=0;
    int n=0;
    scanf("%d %d\n",&random,&N);

    do {
        scanf("%d",&guess);
        n++;
        if (n>N) {
            guess=random;
        }
        if (guess<0) {
            guess=random;
            n=N+1;
        } else if (guess<random) {
            printf("Too small\n");
        } else if (guess>random) {
            printf("Too big\n");
        }

    }while (guess !=random);
    
    if (n==1) {
        printf("Bingo!");
    } else if (n<=3) {
        printf("Lucky You!");
    } else if (n<=N) {
        printf ("Good Guess!");
    } else {
        printf("Game Over");
    }


    

    return 0;
}