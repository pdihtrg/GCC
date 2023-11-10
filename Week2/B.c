#include <stdio.h>
int main() {
    double a;
    scanf("%lf",&a);
    int temp1=(int)a;
    int so1=0,so2=0;
    if (a!=temp1){
    	if (a>0){
    		so1=temp1;
    		so2=temp1+1;
    		if (so1>so2){
				int temp2;
				temp2=so1;
				so1=so2;
				so2=temp2;
			};
		}
		else if (a<0){
	    	so1=temp1;
	    	so2=temp1-1;
	    	if (so1>so2){
				int temp2;
				temp2=so1;
				so1=so2;
				so2=temp2;
			};
		};
		printf("%d %d",so1,so2);
	};	
    
    return 0;
}
