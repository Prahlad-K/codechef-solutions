#include <iostream>
#include <cmath>
using namespace std;

int findmin(int n, int m, int k)
{
    if(n==m)
        return 0;
    if(n>m)
    {
        int min = abs(n-m-1);
        for(int i=1;i<=k;i++)
        {
            if(abs(n-(m+i))<min)
                min = abs(n-(m+i));
        }
        return min;
    }
    else
    { int min = abs(m-n-1);
        for(int i=1;i<=k;i++)
        {
            if(abs(m-(n+i))<min)
                min = abs(m-(n+i));
        }
        return min;
    }

}


int main()
{

    int T,n,m,k;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m>>k;

        cout<<findmin(n,m,k)<<"\n";


        T--;

    }
    return 0;
}
