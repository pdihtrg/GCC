#include <stdio.h>
void sum(long n, long k){
	long r=n/k;
	long day=n;
	while (r!=0){
		day+=r;
		n=r+(n%k);
		r=n/k;}	
	printf("%ld\n",day);;
}
int main(){
long n,k;
scanf("%ld %ld",&n,&k);
sum(n,k);
return 0;}
