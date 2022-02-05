#include <iostream>

using namespace std;

int main()
{

    int T,n;
    int count=0;
    int a[100001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        while(n>0)
        {
            if(n%10==4)
                count++;
            n = n /10;
        }
        a[ctr++]= count;
        count =0;

        T--;

    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
