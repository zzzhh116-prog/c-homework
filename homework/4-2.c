#include <stdio.h>

int main() {
    int A=0;
    int i=0;
    int j=0;

    scanf("%d",&A);

    for(j=1;j<=A;j++){

        for(i=1;i<=j;i++){
            printf("%d*%d=%d",i,j,i*j);
            if (i*j<10) {
                printf("   ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}