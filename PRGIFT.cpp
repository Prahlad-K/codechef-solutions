#include <iostream>

using namespace std;

int main()
{

    int T,n,k;
    cin>>T;

    while(T>0)
    {
        cin>>n>>k;
        int a[n],ctr=0;

        for(int i =0;i<n;i++)
           {
               cin>>a[i];
               if(a[i]%2==0)
                ctr++;
           }

           if(ctr>=k&&k!=0)
            cout<<"YES\n";
           else if(ctr<n&&k==0)
            cout<<"YES\n";
           else
            cout<<"NO\n";

        T--;

    }
    return 0;
}
