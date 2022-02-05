#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int n;
    int ans =1;
    int arr[200], ctr=0;
    while(T>0)
    {
        cin>>n;
        for(int i=n;i>0;i--)
            ans = ans * i;

        arr[ctr++]=ans;

        T--;
        ans=1;
    }

    for(int i=0;i<ctr;i++)
    {cout<<arr[i];
    if(i!=ctr-1)
        cout<<"\n";

    }

}
