#include <stdio.h>
int main(){
    long long n,m,du;
    scanf("%lld %lld",&n,&m);
    if(m==1)
        printf("%lld",n/3+(n%3));

    if(m==2)
        printf("%lld",n/3+1);

    if(m==3){
        if (n%3==0)
            printf("%lld",n/3);
        else
            printf("-1");
    }

    if(m>3){
        du=n%m;
        if(du%3==1){
            if(m%3==1&&n/m-2>=0)
                printf("%lld",(n/m)-2+(2*m+du)/3);
            if (m%3==1&&n/m-2<0)
            	printf("-1");
            	
            if(m%3==2&&n/m-1>=0)
                printf("%lld",(n/m)-1+(m+du)/3);
            if(m%3==2&&n/m-1<0)   
				printf("-1"); 
				
            if (m%3==0)
            	printf("-1");
        }

        if(du%3==2){
            if(m%3==2&&n/m-2>=0)
                printf("%lld",(n/m)-2+(2*m+du)/3);
            if (m%3==2&&n/m-2<0)
            	printf("-1");
            	
            if(m%3==1&&n/m-1>=0)
                printf("%lld",(n/m)-1+(m+du)/3);
            if(m%3==1&&n/m-1<0)   
				printf("-1"); 
				
            if (m%3==0)
            	printf("-1");
        }
        
        if(du%3==0)
            printf("%lld",n/m+du/3);
    }
    return 0;
}
