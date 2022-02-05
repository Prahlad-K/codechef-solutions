#include <bits/stdc++.h>

using namespace std;

int n;
int wheels[n+1];
int system[n+1];
bool blocked[n+1];

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

struct velocity
{
    char sign='+';
    int a=0;
    int b;
}v[n+1];

int root(int x)
{
    if(system[x]==x)
        return x;
    return system[x];
}

void connect(int x, int y)
{
    int i = root(x);
    int j = root(y);

    if(i==j||check(x, y)||block[x]||block[y]||block[i]||block[j])
    {
        block[x]=true;
        block[y]=true;
        block[i]=true;
        block[j]=true;
    }
    else
    {
        system[i]=j;
    }
}

bool check(int x, int y)
{
    char s1, s2;
    int a1, a2, b1, b2, n1, n2;
    s1 = v[x].sign;
    s2 = v[y].sign;
    a1 = v[x].a;
    a2 = v[y].a;
    b1 = v[x].b;
    b2 = v[y].b;
    int ares, bres;

    if(a1==0||a2==0)
    {
        return false;
    }
    else
    {
        if(s1==s2)
            return true;
        else
        {

        }
    }

}

int main()
{
    int m, t, x, y, c, v, ares, bres, sres;

    cin>>n>>m;

    for(int i=1;i<n+1;i++)
        cin>>wheels[i];

    for(int i=1;i<n+1;i++)
        system[i]=i;

    for(int i=1;i<n+1;i++)
        blocked[i]=false;

    while(m--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x>>c;
            wheels[x]=c;
        }
        else if(t==2)
        {
            cin>>x>>y;
            connect(x, y);
        }
        else
        {
            cin>>x>>y>>v;

            if(v[x].a!=0&&v[x].a!=v)
                block[x]=true;

            if(block[x]||block[y]||x==y)
                ares=0;
            else
            {
                ares = v*wheels[x];
                bres = wheels[y];
                int g = gcd(ares, bres);
                ares = ares/g;
                bres = bres/g;
                if(v[x].sign=='+')
                    v[y].sign='-';
                else
                    v[y].sign='-';

            }
            cout<<v[y].sign
            v[y].a = ares;

        }

    }


}
