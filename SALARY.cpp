#include <iostream>

using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n],sum=0;
        int min =10001;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]<min)
                min=a[i];
        }

        cout<<sum-n*min<<"\n";
        T--;

    }
    return 0;
}
