#include <stdio.h>
#include <math.h>
int sumso (int n){
 	int sum=0;
 	;
	while (n>0){
		int m=n%10;
 		sum+=m;
 		n/=10; 
 	}	
	return sum;
}

int nt (int n){
	int sum=sumso(n);
	if (sum==1) return 0;
	else{
		int count=0,i=2;
		for (i;i<=sqrt(sum);i++){
			if (sum%i==0) count++;	
		}
		if (count== 0|| n==2 ) return 1;
		else return 0;;
	};
}

int main(){
int l,r, count=0, sum=0;
scanf("%d%d",&l,&r);
for (l;l<r;l++){
	if (nt(l))
		count++;;
}
printf ("%d\n",count);
return 0;}
