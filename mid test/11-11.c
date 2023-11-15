#include <stdio.h>
int main(){
    int n,i=0,j=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        int temp=a[i];
        j=i-1;
        while (j>=0&&a[j]>temp){
			a[j+1]=a[j];
			j--;        	
        	}
        a[j+1]=temp;
        int r=0;
        printf("Step %d:",i);
        for (r; r < n; r++) {
            printf(" %d", a[r]);
        printf("\n");
        }
		}
return 0;
            
        }
