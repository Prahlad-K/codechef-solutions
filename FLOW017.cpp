#include <iostream>

using namespace std;

int main()
{

    int T,n1, n2, n3;
    cin>>T;

    while(T>0)
    {
        cin>>n1>>n2>>n3;

        int n=max(max(n1, n2), n3);

        if(n==n1)
        {
            if(n2>n3)
                cout<<n2<<"\n";
            else
                cout<<n3<<"\n";

        }
        if(n==n2)
        {
            if(n1>n3)
                cout<<n1<<"\n";
            else
                cout<<n3<<"\n";

        }
        if(n==n3)
        {
            if(n1>n2)
                cout<<n1<<"\n";
            else
                cout<<n2<<"\n";

        }


        T--;

    }
    return 0;
}
