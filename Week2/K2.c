#include<stdio.h>
int main(){
	int test,n;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		int i=n-1;
		while (i>=0){
			printf("%d ",i);
			i--;
		}
		printf("\n");
	}
	return 0;
	}
