#include <math.h>
#include <stdio.h>
int main(){
    long long a,b,c; 
    float delta,x1,x2;
    scanf("%lld%lld%lld",&a,&b,&c);
    if (a==0){
        if (b==0&&c!=0)
            printf("VO NGHIEM\n");
        else if (b!=0)
            printf("%.2f\n",(float)(-c)/b);
        else if (b==0 &&c==0)
            printf("VO SO NGHIEM\n");
    }
    if (a!=0){
        delta = b*b - 4*a*c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1<x2){
				float temp;
				temp=x1;
				x1=x2;
				x2=temp;
			};
            printf("%.2f %.2f", x1, x2);
        }
        else{ 
            if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("%.2f",x1);
        }
        else 
        printf("VO NGHIEM\n");
        }
    }
    return 0;
    }
