#include<stdio.h>
int main(){
long long a,b,c;
scanf("%lld %lld %lld",&a,&b,&c);
if (a>0 && b>0 &&c >0){
	
	if ((a+b)>c && (a+c)>b && (b+c)>a){
		printf("YES\n");}
	else printf("No\n");;
}
else printf("No\n");;

return 0;}
