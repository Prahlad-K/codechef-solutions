#include <iostream>
using namespace std;


int main()
{

    int T,n, k;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>k;
        int e = a[k-1];
        int ctr=0;
        for(int i =0;i<n;i++)
        {

            if(a[i]<=e)
                ctr++;
        }

        cout<<ctr<<"\n";


        T--;

    }
    return 0;
}
