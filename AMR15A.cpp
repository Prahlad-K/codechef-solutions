#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
int ctr=0;
for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i =0;i<n;i++)
    {

        if(a[i]%2==0)
            ctr++;
    }

    if(ctr>(n-ctr))
        cout<<"READY FOR BATTLE\n";
    else
        cout<<"NOT READY\n";


    return 0;
}
