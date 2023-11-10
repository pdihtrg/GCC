#include <stdio.h>
int main (){
unsigned int n;
unsigned i=2;
scanf("%d",&n);
int count =0;
while (n>1){
	if (n%i ==0){
		count+=1;
		if (n==i){
			printf("%d^%d",i,count);	
		};
		n/=i;
	}	else {
			if(count>0){
				printf("%d^%d x ",i,count);
				count=0;
			}
			i++;
		}
}



return 0;}
