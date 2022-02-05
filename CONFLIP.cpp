#include <iostream>

using namespace std;

int main()
{

    int T, g, i, n, q, ictr;
    cin>>T;

    while(T>0)
    {
        cin>>g;

        while(g>0)
        {
            cin>>i>>n>>q;

            if(n%2==0)
                ictr=n/2;
            else
                ictr=n/2+1;

            if(i==q)
                cout<<n-ictr<<"\n";
            else
                cout<<ictr<<"\n";


            g--;
        }

        T--;

    }
    return 0;
}
