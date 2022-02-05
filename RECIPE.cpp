#include <iostream>

using namespace std;

int gcd (int a, int b)
{
    if(a==0||b==0)
        return 0;
    if(a==b)
        return a;

    if(a>b)
        return gcd(a-b, b);
    return gcd(a, b-a);

}

int main()
{

    int T,n;
    int f;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0)
            {
             f = min(gcd(a[i], a[i-1]), f);
            }
            else
                f = a[0];
        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]/f<<" ";

        }
        cout<<"\n";

        T--;

    }
    return 0;
}
