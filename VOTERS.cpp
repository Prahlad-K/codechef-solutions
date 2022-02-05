#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n1,n2,n3;

        cin>>n1>>n2>>n3;
        int n = n1+n2+n3;
        int a[n];
        for(int i =0;i<n;i++)
            cin>>a[i];

        sort(a, a+n);

        int res[n], ctr=0, i=0, prev=-1;

        while(i<n-1)
        {
            if(a[i]==a[i+1]&&a[i]!=prev)
            {
                res[ctr++]=a[i];
                prev = a[i];
            }
            i++;

        }
        cout<<ctr<<"\n";
        for(int j =0;j<ctr;j++)
            cout<<res[j]<<"\n";


    return 0;
}
