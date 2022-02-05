#include <iostream>
#include <algorithm>
using namespace std;


bool banknotes(int a[], int m, int i)
{
    if(i>0)
    {if(a[i]==m)
        return true;

    if(a[i]>m)
        {banknotes(a, m, i-1);}
    else
         {banknotes(a, m-a[i],i);}

    }
    else if(a[i]==m)
        return true;
    else
    return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int T,n, m;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a, a+n);
        if(banknotes(a, m, n-1))
            cout<<"Yes\n";
        else
            cout<<"No\n";

        T--;

    }
    return 0;
}
