#include <stdio.h>
int main(){
long long A,B,C,x,To,Ti,Te,temp;
scanf("%lld %lld %lld",&A,&B,&C);
To=A;
Ti=B;
Te=C;
x=A;
	
	
	if(A<B){
		temp=A;
		x=B;
		B=temp;};
	if(A<B&&B<C){
		temp=C;
		C=B;
		x=temp;};
	if(A<C&&C>B){
		temp=C;
		C=A;
		x=temp;};
	if(x==To)
	printf("To\n");
	else if(x==Ti)
	printf("Ti\n");
	else
	printf("Te\n");;
return 0;}
