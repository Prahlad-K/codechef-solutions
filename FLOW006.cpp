#include <iostream>

using namespace std;

int main()
{

    int T, n, r, sum=0;
    int a[1001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        while(n>0)
        {
            sum = sum+ n %10;
            n = n /10;
        }
        a[ctr++]= sum;
        sum = 0;

        T--;

    }

    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
