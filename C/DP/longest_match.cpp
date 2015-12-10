#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <algorithm>

#define N (1024)

using namespace std;

struct text
{
    int num;
    string word[1024];
}t1, t2;

string s1, s2;
int f[N][N];

void devide(string s, text &t)
{
    int l = s.size();
    t.num = 1;
    for(int i = 0; i < 1000; i++)
    { 
        t.word[i].clear();
    }
    for (int i = 0; i < l; ++i)
    {
        if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] >= '9'))
        {
            t.word[t.num] += s[i];
        }
        else
        {
            ++t.num;
        }
    }
    int now = 0;
    for (int i = 1; i <= t.num ; ++i)
    {
        if (!t.word[i].empty())
        {
            t.word[++now] = t.word[i];
        }
    }
    t.num = now;
}

int main(int argc, char *argv[])
{
    int test = 0;
    while(!cin.eof())
    {
        ++test;
        getline(cin, s1);
        devide(s1, t1);
        getline(cin, s2);
        devide(s2,t2);
        printf("%2d. ", test);
        if(s1.empty() || s2.empty())
        {
            printf("Blank! \n");
            continue;
        }
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= t1.num; ++i)
        {
            for (int j = 1; j <= t2.num; ++j)
            {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
                if(t1.word[i] == t2.word[j])
                {
                    f[i][j] = f[i-1][j-1]+1;
                }
            }
        }
        printf("Length of  lengest match: %d\n", f[t1.num][t2.num]);
    }
    return 0;
}
