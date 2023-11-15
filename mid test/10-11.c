#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2)
		return 0;
	else {
		int j=2,count=0;
		for (j;j<=sqrt(n);j++){
			if (n%j==0) return 0;
		}
		return 1;
	}
}

int cp(int n){
	if(sqrt(n)*sqrt(n)==n) return 1;
	else return 0;
}


int main(){
	int n,i=0,j=0;
	scanf("%d",&n);
	int a[n+1];
	for (i;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if (a[j]<a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
	}
	
	
	
