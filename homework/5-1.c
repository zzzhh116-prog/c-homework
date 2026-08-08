#include <stdio.h>

int main() {
    int a=0,b=0;
    int s=0,i=0,p=0,q=0;
    scanf("%d/%d",&a,&b);

    if (a<=b) {
        s=a;
    } else {
        s=b;
    }
    
    for (i=1;i<=s;i++) {
        p =a%i;
        q =b%i;
        if (p==0 && q==0) {
            a=a/i;
            b=b/i;
            i=1;

        }
    }
    printf("%d/%d",a,b);


    

    return 0;
}