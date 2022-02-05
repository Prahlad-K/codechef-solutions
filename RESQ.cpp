#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int s = sqrt(n);

        int i =s;
        while(n%i!=0)
        {
            i--;
        }

        cout<<n/i-i<<"\n";


        T--;

    }
    return 0;
}
