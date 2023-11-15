#include<stdio.h>
long long gt(long long n){
	long long i=1;
	long long gt=1;
	for(i=2;i<=n;i++){
	gt*=i;
	}
	return gt;
	}
 
 
int main(){
	long n,i;
	scanf("%ld",&n);
	long long a[n];
	for (i;i<n;i++){
		scanf("%lld",&a[i]);
	}
	
	long long max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}	
	}
	
	long long b[max+5];
	for (i=1;i<=max;i++){
		b[i]=0;
	}
		
	for(i=0;i<n;i++) {
		b[a[i]]+=1;
		
	}
	long long soCap=0;
	for (i=1;i<=max;i++){
		if(b[i]==2) soCap++;
		
		if(b[i]>2) {
			soCap+= ( (long long)gt(b[i]) ) / ( (long long)gt(b[i]-2) * 2 );
		}
	}	
	
	printf("%lld\n",soCap);
	
	return 0;
	}
