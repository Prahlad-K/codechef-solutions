#include <iostream>

using namespace std;

int main()
{

    int T,n, ctr=0;
    int type;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(a[i]==a[j])
                    ctr++;
            }
            if(ctr%2==1)
             type = a[i];
             ctr=0;

        }

        cout<<type<<"\n";

        T--;

    }
    return 0;
}
