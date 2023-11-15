#include <stdio.h>

void shift(int a[],int n,int k){
	int temp[n];
	int i=0;
	for (i=0;i<n;i++) {
        temp[(i - k + n) % n] = a[i];
    }
	for (i=0;i<n;i++) {
        a[i] = temp[i];
    }	
}

int main(){
	int n,k,i=0;
	scanf("%d",&n);
	int a[n];
	for (i;i<n;i++){
		scanf("%d",&a[i]);
		}
	scanf("%d",&k);
	shift(a,n,k);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
	}

