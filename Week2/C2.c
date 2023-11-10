#include <stdio.h>
#include <math.h>
int main (){
long n,i=1;
scanf("%ld",&n);
long count=0;
for (i;i<=sqrt(n);i++){
	if (n%i==0)
		if(i*i == n)
			count+=1;
		else count+=2;;
	}	
printf("%ld",count);
return 0;}
