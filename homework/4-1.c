#include <stdio.h>

int main() 
{
	int N=0;
	int i=1,j=1,k=1,l=1,m=1,q=1,r=1,p=0;
	int sum=0;

	scanf("%d",&N);
	while (i<=N-1) {
		j *=10;
		i++;
	}
	k=j;
	while (j<k*10) {
		l=j;
		p=j;
		while (q<=N) {
			while (r<=N) {
				j=l;
				m *=(j%10);
			    r++;
			}
			l /=10;
			sum +=m;
		    m=1;
			r=1; 
			q++;
	    }
	    q=1;
	    j=p;
	    if (sum==j) {
	    	printf("%d\n",sum);
		}
		sum=0;
		j++; 
	}
	return 0;
}
