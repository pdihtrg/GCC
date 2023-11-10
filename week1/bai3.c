#include <stdio.h>
int main() {
    int nam;
    scanf("%d",&nam);
    if(((nam % 4 == 0) && (nam % 100 != 0))||(nam % 400 == 0)){
        printf("YES");
    }
    else {
        printf("NO");
    };
    return 0;
}