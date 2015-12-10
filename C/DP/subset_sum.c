#include <stdio.h>

long long a[6001];
int b[] = {1,2,4,10,20,40,100,200,400,1000,2000};

int main(int argc, char *argv[])
{
    int i, j;
    
    for(i = 0; i < 6001; i++)
        a[i] = 1;
    for(i =1; i < 11; i++)
    {
        for(j = b[i]; j < 6001; j++)
            a[j] += a[j-b[i]];
    }
    while(1)
    {
        double d;
        int n;

        scanf("%lf", &d);
        if(d == 0.0) break;
        n = (int)(d * 20.0);
        printf("%6.2lf\t%lld\n", d, a[n]);
    }
    return 0;
}

