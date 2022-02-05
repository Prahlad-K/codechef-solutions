#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        int ctr=0;
        int min = a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<=min)
            {ctr++;
            min = a[i];}

        }
        cout<<ctr<<"\n";
        T--;

    }
    return 0;
}
