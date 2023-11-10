#include <stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}
	
int ucln(int a,int b){
	if (a%b!=0){
		return ucln(b,a%b); }	
	else return b;;
	}

int bcnn(int a, int b){
	
	
	}
	
	
	
int main (){
	int i;
	scanf("%d",&i);
	while (i--){
		int a,b;
		scanf("%d %d",&a,&b);
		if (a>b) swap(&a,&b);
		printf("%d",ucln(a,b) );
	};
	
	
return 0;}
