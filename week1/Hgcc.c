#include <math.h>
#include <stdio.h>
int main(){
    int  a,b,c; 
    float delta,x1,x2;
    scanf("%lld%lld%lld",&a,&b,&c);
    if (a==0){
        if (b==0&&c!=0)
            printf("VO NGHIEM");
        if (b==0&&c==0)
            printf("VO SO NGHIEM");
        if (b!=0 && c!=0)
            printf("%.2f",(-c)/b);
    }
    if (a!=0){
        delta = (long long) b*b - 4*a*c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2f %.2f", x1, x2);
        }
        else{ 
            if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("%.2f",x1);
        }
        else 
        printf("VO NGHIEM");
        }
    }

    return 0;
    }