#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int T,n1,n2;
    cin>>T;

    while(T>0)
    {
        cin>>n1>>n2;
        cout<<max(n1, n2)<<" "<<n1+n2<<"\n";
        T--;
    }
    return 0;
}
