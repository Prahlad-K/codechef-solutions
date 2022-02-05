#include <iostream>

using namespace std;

int main()
{

    int T,n, rev=0, r, stor;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        stor = n;
        while(n>0)
        {
            rev = rev* 10 + n%10;
            n = n /10;

        }

        if(stor==rev)
            cout<<"wins"<<"\n";
        else
            cout<<"losses"<<"\n";

        rev =0;
        T--;

    }
    return 0;
}
