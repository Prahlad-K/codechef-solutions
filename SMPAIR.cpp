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

        int min = a[0];
        int p = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i]<min)
            {
                min = a[i];
                p = i;
            }

        }

        a[p] = -1;
        int sum = min;
        if(p!=n-1)
        min = a[p+1];
        else
        min = a[p-1];

        for(int i=0;i<n;i++)
        {
            if(a[i]<min &&a[i]!=-1)
            {
                min = a[i];
            }
        }
        sum = sum +min;
        cout<<sum<<"\n";

        T--;

    }
    return 0;
}
