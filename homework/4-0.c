#include <stdio.h>
 
int main()
{
	int a=0;
	scanf("%d",&a);
	int n=0;
	
	int i,j,k=0;
	
	i=a;
	while (i<= a+3) {
		j=a;
		while (j<=a+3) {
			k=a;
			while (k<=a+3) {
				k++;
				if (i !=j && i !=k && k !=j) {
					n++;
					printf("%d%d%d",i,j,k);
					if (n==6) {
						printf("\n");
						n=0;
					} else {
						printf(" ");
					}
				}
			}
			j++;
		}
		i++;
	}	
	return 0; 
}
