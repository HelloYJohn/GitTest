#include <cstdio>
#include <cstring>

const int N = 100;
char str[N];
int dp[N][N];
int path[N][N];

void oprint(int i, int j)
{
    if(i > j)
    {
        return;
    }
    if(i == j)
    {
        if(str[i] == '[' || str[i] == '{')
            printf("[]");
        else
            printf("()");
    }
    else if(path[i][j] == -1)
    {
        printf("%c", str[i]);
        oprint(i+1, j-1);
        printf("%c", str[j]);
    }
    else
    {
        oprint(i, path[i][j]);
        oprint(path[i][j]+1, j);
    }
}

int main()
{
    while(gets(str))
    {
        int n = strlen(str);
        if(n == 0)
        {
            printf("\n");
            continue;
        }
        memset(dp, 0, sizeof(dp));
        for(int i=0; i<n; i++)
        {
            dp[i][i] = 1;
        }
        
        for(int r=1; r<n; r++)
        {
            for(int i=0; i<n-r; i++)
            {
                int j = i + r;
                dp[i][j] = 0x7fffffff;
                if((str[i] == '(' && str[j] == ')')
                   || (str[i] == '[' && str[j] == ']'))
                {
                    dp[i][j] = dp[i+1][j-1];
                    path[i][j] = -1;
                    continue;
                }
                for(int k=i; k<j; k++)
                {
                    if(dp[i][j] > dp[i][k] + dp[k+1][j])
                    {
                        dp[i][j] = dp[i][k] + dp[k+1][j];
                        path[i][j] = k;
                    }
                }
            }
        }
        oprint(0,n-1);
        printf("\n");
    }
    return 0;
}

