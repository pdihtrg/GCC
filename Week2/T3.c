#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, so, j , sum;
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        sum = 0;
        so = i;
        while(so > 0)
        {
            j = so % 10;
            sum += pow(j, 3);
            so /= 10;
        }
        if(i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

