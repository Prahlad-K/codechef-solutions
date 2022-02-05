#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long int N,m;

        cin>>N>>m;
        while(m--)
        {
            long long q;
            cin>>q;
            long L = max (q-N,N+1);
            long R = min (q-1, 2*N);

            if(L>R)
                cout<<0<<"\n";
            else
                cout<<R-L+1<<"\n";
        }
    return 0;
}
