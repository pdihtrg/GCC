#include <stdio.h>
#include <math.h>
void thuaso(long long n){
	long i=2;
	int count=0, round=0;
	for (i;i<=sqrt(n);i++){
		if (n%i==0) round++;;
		if (round==1) count++;;
	}
printf("%d",count);
}


int main(){
	long n;
	scanf("%ld",&n);
	thuaso(n);
	}
