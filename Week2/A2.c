#include <stdio.h>
void swap(int *a, int *b){
int temp= *a;
*a=*b;
*b=temp;
}

void ucln( int a, int b){
 if (a%b!=0)
 	ucln(b, a%b);
else 
	printf("%d",b);;
}
	
int main (){
int x,y,r=x%y;
scanf("%d %d",&x,&y);
if (x<y) swap(&x,&y);
ucln(x,y);
return 0;}
