#include <iostream>

using namespace std;

int main()
{

    int T;
    long long n,m,r;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m;

        r = n%m;

        if(r%2==0)
            cout<<"EVEN\n";
        else
            cout<<"ODD\n";
        T--;

    }
    return 0;
}
