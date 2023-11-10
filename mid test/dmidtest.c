#include <stdio.h>
#include <math.h>
void thuaso(long long n){
	long i=3;
	long count=0;
	if(n%2==0){
		count++;
		while(n%2==0){
		n/=2;
		}
	
	}
	for (i;i<=sqrt(n);i+=2){
		if (n%i==0){
		while (n%i==0){
				n/=i;
		}
		count++;
		}}
	if (n>1) count+=1;
printf("%d",count);
}


int main(){
	long long n;
	scanf("%lld",&n);
	thuaso(n);
	return 0;
	}
