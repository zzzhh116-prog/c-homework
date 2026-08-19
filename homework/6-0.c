#include <stdio.h>

int main(){
    double a=0,d=0;
    int b=0;
    char c=0;

    scanf("%lf %d %c %lf",&a,&b,&c,&d);

    printf("%c %d %.2f %.2f",c,b,a,d);

    return 0;
}