#include <iostream>

using namespace std;


int XOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}

int main()
{

    int T,n, ans;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n], b[n*n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                b[2*i+j]=a[i]+a[j];
            }
        }

        ans = b[0];
        for(int i =1;i<n*n;i++)
        {
            ans = XOR(ans, b[i]);
        }
        cout<<ans<<"\n";

        T--;

    }
    return 0;
}
