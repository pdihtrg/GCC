#include <stdio.h>
int main (){
int xa,xb,xc,xd,ya,yb,yc,yd;
scanf("%d %d\n",&xa,&ya);
scanf("%d %d\n",&xb,&yb);
scanf("%d %d\n",&xc,&yc);
scanf("%d %d",&xd,&yd);
long long ab= (long long)(yb-ya)*(xc-xd);
long long cd= (long long)(yd-yc)*(xa-xb);
if (ab!=cd){printf("YES!");}
else printf("NO");;
return 0;}
