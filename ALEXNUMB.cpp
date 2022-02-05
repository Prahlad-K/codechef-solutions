#include <iostream>

using namespace std;

int main()
{
    int T;
    long long int n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        long long int a[n];
        for(long long int i =0;i<n;i++)
            cin>>a[i];

        long long int ans;
        ans=(n*(n-1))/2;
        cout<<ans<<"\n";

        T--;

    }
    return 0;
}
