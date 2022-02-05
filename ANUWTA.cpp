#include <iostream>

using namespace std;

int main()
{

    long long int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        long long ans = n + (n*(n+1))/2;
        cout<<ans<<"\n";

        T--;

    }
    return 0;
}
