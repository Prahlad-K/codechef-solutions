#include <iostream>

using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        if((n-1)%4==0)
            cout<<"ALICE"<<"\n";
        else
            cout<<"BOB"<<"\n";

        T--;

    }
    return 0;
}
