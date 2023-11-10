#include <stdio.h>
int main(){
	int n,i=1;
	scanf("%d",&n);
	for (;i<=2*n-1;i++){
		if (i==1||i==2*n-1){
			int j1=1;
			for(;j1<=2*n-1;j1++)
			printf("%d",n);
			printf("\n");
		}
		else {
			if(i==2||i==2*n-2){
				int j2=0;
				printf("%d",n-j2);
				for (;j2<=2*n-4;j2++){
					printf("%d",n-1);
				}
				printf("%d",j2-1);
				printf("\n");
			}
		};
	
	}
	return 0;
}
