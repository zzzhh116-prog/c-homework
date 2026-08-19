#include <stdio.h>

int main(){
    char a=0;
    
    while(1) {
        scanf("%c",&a);
        if(a>='A' && a<='Z') {
            a=a+'a'-'A';
            
        } else if(a>='a' && a<='z') {
            a=a+'A'-'a';
           
        } else if(a=='#') {
            break;
        }
        printf("%c",a);
    }
    

    return 0;

}