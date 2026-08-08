#include <stdio.h>

int main() {
    int N=0;
    int i=0;
    double j=2.0,k=1.0;
    double sum=0;
    scanf("%d",&N);

    for (i=1;i<=N;i++) {
        int s=j;
        sum +=j/k;
        j=j+k;
        k=s;

    }
    printf("%.2lf",sum);

    return 0;
}