#include <stdio.h>

int main(){
    char a=0;
    int b=0;
    while(1) {
        scanf("%c",&a);
        if(a==' ') {
            printf("%d ",b);
            b=0;
        }else if(a=='.'){
            printf("%d",b);
            break;
        }else {
            b++;
        }
        
    }

    return 0;

}