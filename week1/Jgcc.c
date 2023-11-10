#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%lld\n",(long long)a*b);
printf("%d\n",a/b);
printf("%d\n",a%b);
printf("%lld\n",(long long)a*a*a);
printf("%lld\n",(long long) b*b*b);
 
return 0;
}