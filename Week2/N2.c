#include <stdio.h>
long gt(long n){
	long i=1;
	while(n>0){
	i*=n;
	n--;
	}
	return i;
}


int main(){
	int testCase;
	scanf("%d",&testCase);
	while (testCase--){
		long n;
		scanf("%ld",&n);
		if (n==2||n==3) printf("Susan");
		if(n>3){
			if(n%2==0) printf("Alice");
			else printf("Susan");
		}
	}
	
	return 0;
}
