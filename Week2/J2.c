#include <stdio.h>
#include <math.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for (i=-n+1;i<n;i++){
		for (j=-n+1;j<n;j++){
			if (i-j==0||i==0||(j==n-1 && i>0)||(j==-n+1 &&i<0) )
				printf("*");
			else printf(" ");
			}
			printf("\n");
		}
	
	
	return 0;
	}
