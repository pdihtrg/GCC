#include <stdio.h>
int main(){
int n,i=0,j=0;
scanf("%d",&n);
/* cách 1: chia 2 tam giác
int j,r;
for (i;i<=n;i++){
	for(j=n-i;j>0;j--)
		printf(" ");
	for(r=i;r>0;r--)
		printf("*");
	if (i!= 1){
	for (j=i-1;j>0;j--)
	printf("*");
	for(j=n-i;j>0;j--)
		printf(" ");
	};	
		printf("\n");
	}*/
	// cách 2 chon truc chinh giua
	for (i;i<n+1;i++){
		for (j=-(n-1);j<=n-1;j++){
			if (j>-i&& j<i)
				printf("*");
			else 
				printf(" ");;
		}
		printf("\n");
	}
	
	// hình thay Hung :    printf(max(abs(i),abs(j))+1)
return 0;}
