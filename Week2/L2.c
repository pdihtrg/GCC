#include <stdio.h>
void count(long n){
	long long i=1;
	long long gt=1;
	for (i;i<=n;i++){
	gt*=i;
	}
	long j=n/5;
	long a=gt/(j*10);
	a%=10;
	printf("%ld",a);
	}
int main(){
	long n;
	scanf("%ld",&n);
	count(n);
	return 0;
}
