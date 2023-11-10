#include <stdio.h>
int main (){
	int n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=-n+1;j<n-1;j++){
			if (i+j>0 &&i+j<=n) printf("*");
			else printf(" ");;
		}
		printf("\n");
	}
	return 0;
	}
