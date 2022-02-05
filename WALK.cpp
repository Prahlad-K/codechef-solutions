#include <iostream>
using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int m=0;
        for(int i =0;i<n;i++)
        {
            m = max(m, a[i]+i);
        }

        cout<<m<<"\n";



        T--;

    }
    return 0;
}
