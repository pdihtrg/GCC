#include<stdio.h>
void fibonacci(long n){
	long fibo[n+1];
	long i;
	fibo[0]=0;
	fibo[1]=1;
	for(i=2;i<=n;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		}
	printf("%ld\n",fibo[n]);
	}
int main(){
	int testCase =0;
	scanf("%d",&testCase);
	while (testCase--){
		long n;
		scanf("%ld",&n);
		fibonacci(n);
	}
	
	}
