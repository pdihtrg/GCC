#include <stdio.h>
 
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a==0)
	{  if (b==0)
	   { printf("ALL");}
	   else {printf("INVALID");}}
	else {
	printf("%.6f",(float)(-b)/a);	
	};
	return 0;
	}