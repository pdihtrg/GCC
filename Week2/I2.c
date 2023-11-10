#include<stdio.h>
#include<math.h>
int main(){
	int test;
	scanf("%d",&test);
		while(test--){
		long n;
		scanf("%ld",&n);
		int i=10;
		int j=1;
		for (j;j<=i;j++){
			printf("%ld x %d = %lld\n",n,j,(long long)n*j);
		}
	}
	return 0;
	}
	
