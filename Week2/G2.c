#include <stdio.h>
#include <math.h>
long SNT(long x){
	if(x<2)
		return 0;
	else{
		long i;
		for(i=2; i<=sqrt(x); i++){
			if(x%i==0){
			return 0;
			}
		}
		return 1;
	}	
}

long sum(long x){
	long sum=0;
	while (x>0){
		sum+=x%10;
		x/=10;
		}
	return sum;
}

int main(){
long n;
scanf("%ld",&n);
if (SNT(n) && SNT(sum(n))) printf("YES.\n");
else printf("NO\n");;
return 0;}
