#include <iostream>

using namespace std;
bool reachable(int cop, int house, int p)
{
    if(house>=cop-p&&house<=cop+p)
    {
        return true;
    }
    return false;
}
int main()
{

    int T,n, x, y, p, ctr=0;
    bool reble= false;
    cin>>T;

    while(T>0)
    {
        cin>>n>>x>>y;
        p = x*y;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<=100;i++)
        {
            for(int j=0;j<n;j++)
            {if(reachable(a[j], i, p))
                reble = true;}

            if(!reble)
                ctr++;
            reble = false;

        }
        cout<<ctr<<"\n";
        ctr=0;

        T--;

    }
    return 0;
}
