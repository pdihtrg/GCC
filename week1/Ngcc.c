#include <stdio.h>
int main(){
    long long A,B,C;
    int count =0;
    scanf("%lld%lld%lld",&A,&B,&C);
    for(;A<=B;A+=C){
    	count+=1;
        };
    printf("%d",count);
    return 0;
}