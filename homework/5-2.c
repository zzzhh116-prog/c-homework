#include <stdio.h>

int main() {
    int N=0;
    int k=1;
    int p=0,t=0,i=0,j=0;
    scanf("%d",&N);

    if (N<0) {
        printf("fu ");
        N =0-N;
    }
    p=N;
    while (N>0) {
        N /=10;
        i++;
    }
    while (j< i-1) {
        k *=10;
        j++;
    }
    for (;k>=1;k/=10) {
        t =p/k;
        if (t==0) {
            printf("ling ");
        } else if (t==1) {
            printf("yi ");
        } else if (t==2) {
            printf("er ");
        } else if (t==3) {
            printf("san ");
        } else if (t==4) {
            printf("si ");
        } else if (t==5) {
            printf("wu ");
        } else if (t==6) {
            printf("liu ");
        } else if (t==7) {
            printf("qi ");
        } else if (t==8) {
            printf("ba ");
        } else if (t==9) {
            printf("jiu ");
        }
        p =p%k;

    }    
    

    return 0;
}