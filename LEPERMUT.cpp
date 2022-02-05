#include <iostream>

using namespace std;

int main()
{

    int T,n, inv =0, loc=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j =i+1;j<n;j++)
            {
                if(i<j&&a[i]>a[j])
                inv++;

            }
        }

        for(int i =0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                loc++;

        }

        if(inv==loc)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        inv=0;
        loc=0;

        T--;

    }
    return 0;
}
