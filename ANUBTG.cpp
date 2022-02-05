#include <iostream>
#include <algorithm>
using namespace std;

bool compare (int a, int b)
{
    if(a>b)
        return true;
    return false;
}

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
            cin>>a[i];

        sort(a,a+n, compare);

        int i =0,cost=0;
        while(i<n)
        {
            if(i<n-1)
            {
                cost=cost+a[i++]+a[i];
                i +=3;
            }
            else
            {
                cost=cost+a[i];
                i++;
            }
        }
        cout<<cost<<"\n";


        T--;

    }
    return 0;
}
