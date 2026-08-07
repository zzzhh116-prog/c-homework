#include <stdio.h>

int main() 
{
	int a,i,j,k=0;
	int n=0;
	
	scanf("%d",&a);
	
	for (i=a;i<=a+3;i++) {
		for (j=a;j<=a+3;j++) {
			for (k=a;k<=a+3;k++) {
				printf("%d%d%d",i,j,k);
				n++;
				if (n !=6 ) {
					printf(" ");
				}else {
					printf("\n");
					n=0;
				}
			}
		}
	}
	
	return 0;
}
