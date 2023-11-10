#include <stdio.h>
int main(){
	int i=1,n=0;
	scanf("%d",&n);
	for(;i<=n;i++){
		int j=0,r=0;
		if(i==1||i==n){
			for(;j<=(n-i);j++){
				printf("*");
			}
			printf("\n");
		}
		else{
			printf("*");
			for(;r<=(3-i);r++){
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
	return 0;
}
