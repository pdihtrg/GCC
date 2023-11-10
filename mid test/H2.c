#include<stdio.h>
#include<math.h>

int ntCheck(int n){
	if (n<2)
		return 0;
	else
	{
		int i=2,count=0;
		for(i;i<=sqrt(n);i++){
			if (n%i==0){
				count++;
				}		
		} 
		if(count==0) return 1;
		else return 0;	
	}
}


void check(int n){
	int i=0;
	int so=n;
	while (n>0){
		if (ntCheck(n)) i=1;
		else i=0;
		n/=10;
	}
	if (i) printf("%d ",so);
}
int main (){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++) check(i);
	return 0;
	}

