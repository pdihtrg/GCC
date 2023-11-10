#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);
    if(a>=0){
        printf("%d %d",(int)--a,(int)++a);
    }
    else {
        printf("%d %d",(int)--a,(int)++a);
    };
    return 0;
}