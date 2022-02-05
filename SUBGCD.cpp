#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}


int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a[n];

        cin>>a[0];
        int g = a[0];
        for(int i =1;i<n;i++)
            {cin>>a[i];
            g = gcd(g, a[i]);}

        if(g!=1)
            cout<<-1<<"\n";
        else
            cout<<n<<"\n";



        T--;

    }
    return 0;
}
