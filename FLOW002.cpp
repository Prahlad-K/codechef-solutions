#include <iostream>

using namespace std;

int main()
{

    int T, n1,n2;
    int a[1001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n1>>n2;
        a[ctr++]=n1%n2;
        T--;
    }

    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
