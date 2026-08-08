#include <stdio.h>

int main() {
    int M=0,N=0;
    int i=0,j=0,k=0;
    int n=0,sum=0;
    scanf("%d %d",&M,&N);

    for (i=M;i<=N;i++) {
        k=0;
        for (j=1;j<=i;j++) {
            if (i%j ==0) {
                k++;
            }
        }
        if (k ==2) {
            n++;
            sum +=i;
        }
    }
    printf("%d %d",n,sum);


    return 0;
}