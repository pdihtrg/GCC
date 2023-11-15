#include <stdio.h>
void uoc(long n){
	long i=1;
	int count=0;
	for (i;i<n;i++){
		if (n%i!=0){
			if(((long long)n*n)%i==0){
				count++;
			}
		}					
	}
	printf("%d",count);
}
int main(){
long n;
scanf("%ld",&n);
uoc(n);
return 0;}
