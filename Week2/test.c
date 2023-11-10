#include<stdio.h>
#include <math.h>
int max(int x, int y){
	int max= x;
	if (x<y) max=y ;
	return max; 
	}


int main (){
int n;
scanf("%d",&n);
int i=0,j=0;

for (i;i<n;i++){
	for (j;j<n;j++){
		printf("%d", max(abs(i),abs(j))+1);
		}
}


return 0;
}
