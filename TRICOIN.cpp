#include <iostream>

using namespace std;

int main()
{

    long int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        long int i=1;

        while((i*(i+1))/2<=n)
        {
            i++;
        }

        i = i -1;
        cout<<i<<"\n";

        T--;

    }
    return 0;
}
