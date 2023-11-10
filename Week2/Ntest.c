#include <stdio.h>
int main(){
    long long A,B,C;
    long long count=0;
    scanf("%lld%lld%lld",&A,&B,&C);
    if (A>B){
    	long long temp;
		A=temp;
		A=B;
		B=temp;};
    if (A==B){
		if (A%C==0)
			count=1;
		else 
			count=0;;}		
    count= (long long)(B/C)-((A-1)/C);
    printf("%lld",count);
    return 0;
}
