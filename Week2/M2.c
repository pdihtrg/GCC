#include <stdio.h>
#include <math.h>
int min(int i,int j){
	int min=abs(i);
	if (abs(i)>abs(j)) min=abs(j);
	printf("%c",min+97);
}
int main (){
	int round;
	scanf("%d",&round);
	while(round--){
		int n,i,j;
		scanf("%d",&n);
		for (i=-n+1;i<n;i++)	{
			for (j=-n+1;j<n;j++){
					min(i,j);
				}
				printf("\n");
		}
	}
	return 0;
	}
