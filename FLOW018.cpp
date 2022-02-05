#include <iostream>

using namespace std;

int main()
{

    int T,n;
    cin>>T;
    int f=1;

    while(T>0)
    {
        cin>>n;

        for(int i=2;i<=n;i++)
            f = f * i;

        cout<<f<<"\n";
        f =1;

        T--;

    }
    return 0;
}
