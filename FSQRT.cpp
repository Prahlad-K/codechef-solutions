#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int T,n;
    int a[1001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        a[ctr++]= sqrt(n);

        T--;

    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
