#include <iostream>

using namespace std;

int main()
{
    int n,l,r,c,q;
    char p;


    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>q;
    while(q--)
    {cin>>l>>r>>c>>p;

    int count=0;
    for(int i=l-1;i<r;i++)
    {
        if(arr[i][c-1]==p)
            count++;

    }

    cout<<count<<endl;
    }

    return 0;
}
