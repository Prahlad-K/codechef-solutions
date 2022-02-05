#include <iostream>

using namespace std;

int main()
{

    int T,n, rev=0;
    int a[1001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        while(n>0)
        {rev = rev * 10 + n%10;
        n = n /10;
        }

        a[ctr++] = rev;
        rev = 0;

        T--;

    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
