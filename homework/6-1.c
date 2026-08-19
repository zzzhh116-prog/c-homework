#include <stdio.h>

int main(){
    int res=0,num=0;
    char ch=0;

    scanf("%d",&res);

    while (1) {
        
        scanf("%c",&ch);
        if(ch=='=') break;
           
        
        scanf("%d",&num);

        if(ch=='+') {
            res +=num;
        } else if(ch=='-') {
            res -=num;
        } else if(ch=='*') {
            res *=num;
        } else if(ch=='/') {
            if(num==0) {
                printf("ERROR");
                return 0;
            } else {
                res /=num;
            }
        }

    }
    printf("%d",res);
    
    return 0;

}