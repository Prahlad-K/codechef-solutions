#include <iostream>

using namespace std;


int main()
{

    int a,n,k, ctr=0;

        cin>>a>>n>>k;

        int c[k];

        for(int i=0;i<k;i++)
        {
            c[ctr++]=a%(n+1);
            a=a/(n+1);
        }
        for(int i=0;i<k;i++)
            cout<<c[i]<<" ";
        cout<<endl;



    return 0;
}
