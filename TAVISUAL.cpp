#include <iostream>

using namespace std;

int main()
{

    int T,N,c,q;
    cin>>T;

    while(T>0)
    {
        cin>>N>>c>>q;
        int l,r;;
        while(q--)
        {
            cin>>l>>r;
            if(c>=l&&c<=r)
            c=l+r-c;
        }
        cout<<c<<"\n";

        T--;

    }
    return 0;
}
