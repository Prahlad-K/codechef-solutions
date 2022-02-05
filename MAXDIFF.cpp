#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int T,n,k;
    cin>>T;

    while(T>0)
    {
        cin>>n>>k;
        int a[n], sums=0, sumc=0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);

        int child;
        if(k>n/2)
            child = n-k;
        else
            child = k;

        for(int i =0;i<n;i++)
        {
            if(i<child)
                sums= sums+a[i];
            else
                sumc=sumc+a[i];

        }
        cout<<sumc-sums<<"\n";



        T--;

    }
    return 0;
}
