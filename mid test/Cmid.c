#include <stdio.h>
int main (){
	int n,i=0;
	scanf("%d",&n);
	for (i;i<n;i++){
		int j,r;
		for (j=n-i-14;j>0;j--){
			printf(" ");
		}
		for (r=n;r>0;r--) printf("*");
		if (i<n-1)
			printf("\n");;
	}
}
