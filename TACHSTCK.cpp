#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n,D;

        cin>>n>>D;
        int a[n];

        for(int i =0;i<n;i++)
            cin>>a[i];

        sort(a, a+n);
        int ctr=0;

        for(int i =1;i<n;i++)
        {
            if(a[i]-a[i-1]<=D)
            {
                i++;
                ctr++;
            }

        }
        cout<<ctr<<"\n";

    return 0;
}
