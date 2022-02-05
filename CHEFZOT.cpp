#include <iostream>

using namespace std;

int main()
{

    int n,ctr=0;
        cin>>n;
        int a[n];
        int max=0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
                ctr++;
            else
            {
                if(ctr>max)
                    max = ctr;
                ctr=0;
            }
        }

        if(ctr>max)
            max = ctr;

        cout<<max<<"\n";

    return 0;
}
