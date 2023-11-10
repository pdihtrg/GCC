#include <stdio.h.>
int main(){
	int n;
	scanf("%d",&n);
	int odd=0,even=0;
	if(n>0){
		while(n>0){
			int i=n%10;
			if (i%2==0){
				odd+=1;
			}else 
			even+=1;;
			n/=10;
		}
		printf("%d %d",odd,even);
	}
	return 0;
}
