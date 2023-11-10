#include <stdio.h>
int main() {
    float i;
    scanf("%f",&i);
    int a= (int)i;
    if(a>=0){
        printf("%d %d",a,++a);
    }
    else {
        printf("%d %d",(a,a-1)
    };
    return 0;
}
