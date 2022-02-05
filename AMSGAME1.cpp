#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;

    return gcd(b, a%b);
}


int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];

        for(int i =0;i<n;i++)
            cin>>a[i];

        int ans=a[0];

        for(int i =0;i<n;i++)
        {
            ans = gcd(a[i],ans);
        }
        cout<<ans<<"\n";

        T--;

    }
    return 0;
}
