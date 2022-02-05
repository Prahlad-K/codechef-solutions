#include <iostream>

using namespace std;

int main()
{

    int T,B, m;
    cin>>T;

    while(T>0)
    {
        cin>>B;
        m = B/2;
        int ans = m * (m - 1);
        ans = ans /2;
        cout<<ans<<"\n";


        T--;

    }
    return 0;
}
