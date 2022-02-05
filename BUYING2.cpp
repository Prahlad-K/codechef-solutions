#include <iostream>

using namespace std;

int main()
{

    int T,n,x,s=0,ans;
    cin>>T;

    while(T>0)
    {
        cin>>n>>x;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s = s+a[i];
        }
        ans = s/x;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=s%x)
            {
                ans = -1;
                break;
            }

        }

        cout<<ans<<"\n";
        s =0;

        T--;

    }
    return 0;
}
