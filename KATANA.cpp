#include <stdio.h>

using namespace std;

int ans=0;
void calculate(int f, int l, int a[])
{
    if(f==l)
    {
        ans++;
    }
    else
    {
        int m = a[f];

        for(int i=f+1;i<=l;i++)
        {
            if(a[i]<m)
                m = a[i];
        }

        ans++;

        int start, end=-1;
        for(int i=f;i<=l;i++)
        {
            a[i] = a[i]-m;

            if(a[i]!=0)
            {
                if(end==-1)
                {
                    start =i;
                    end=start;
                }
                if(i==l)
                {
                    end =i;
                    calculate(start, end, a);
                }
            }
            else
            {
                if(end!=-1)
                {
                    end = i-1;
                    calculate(start, end, a);
                    end =-1;
                }
            }
        }
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%i", &a[i]);
    }
    calculate(0, n-1, a);
    printf("%i", ans);

    return 0;
}
