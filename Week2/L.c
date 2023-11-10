#include <stdio.h>
#include <math.h>
int main(){
int x1,y1,x2,y2;
float r1,r2,r;
scanf ("%d %d %d %d %f %f",&x1,&y1,&x2,&y2,&r1,&r2);
double kc;
kc= sqrt( pow((double)x1-x2,2)+ pow((double)y1-y2,2) );
r=r1+r2;
if (kc==r|| kc==abs(r1-r2)){
	printf("Co 1 diem chung\n");
}else if (kc<r&&kc>(r1-r2)){
	printf("Co 2 diem chung\n");
	}
else if (r1==kc+r2||r2==r1+kc){
	printf("Co 1 diem chung\n");
	}
else {printf("Khong co diem chung\n");};
return 0;}
