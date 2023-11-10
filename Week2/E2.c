#include <stdio.h>
#include <math.h>
long long swap(long long *x, long long *y){
	long long temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
long long l,r,i;
long count=0;
scanf ("%lld %lld",&l,&r);
if (l>r) swap(&l,&r);;
for(i=l+1;i<r;i++){
	long long sqr = sqrt(i);
	if (sqr*sqr==i){
	count++;};
}
printf("%ld\n",count);
return 0;}
