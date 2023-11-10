#include <stdio.h>
#include <math.h>
int snt(int n){
	if (n<=3)
		return n> 1;
	else if (n %2 ==0 || n%3==0)
		return 0;
	int i=5;
	for (i=5;i<=sqrt(n);i+=6){
		if (n%i==0||n%(i+2)==0){
			return 0;}	
	}
	return 1;	
	}

int main(){
long n;
scanf("%ld",&n);
	int i=1;
	int count=0;
	for (i;i<n;i++){
		if(n%i==0)
			if(snt(i)) count++ ;;
	}
	printf("%d",count);
return 0;}
