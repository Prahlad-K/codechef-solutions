#include <iostream>

using namespace std;

int main()
{

    long long int T,n, k;
    cin>>T;

    while(T>0)
    {
        cin>>n>>k;

        if(k==0)
            cout<<0<<" "<<n<<"\n";
        else
        {
            cout<<n/k<<" "<<n%k<<"\n";
        }

        T--;

    }
    return 0;
}
