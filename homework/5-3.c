#include <stdio.h>

int main() {
    int a=0,n=0;
    int sum=0,t=0,i=0;
    scanf("%d %d",&a,&n);

    t =a;

    for (i=1;i<=n;i++) {
        sum +=t;
        t =t*10+a;
    }
    printf("%d",sum);

    return 0;
}