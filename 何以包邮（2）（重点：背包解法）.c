#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))


int n, x;
int w[33], f[300010];

int main()
{
    scanf("%d%d", &n, &x);

    int sum = 0;
    int i,j;
    for ( i = 0; i < n; i ++ )
    {
        scanf("%d", &w[i]);
        sum += w[i];
    }

    int m = sum - x;
    for (i = 0; i < n; i ++ )
        for ( j = m; j >= w[i]; j -- )
            f[j] = max(f[j], f[j - w[i]] + w[i]);

    printf("%d\n", sum - f[m]);
    return 0;
}




