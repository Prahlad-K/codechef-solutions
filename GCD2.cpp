#include <iostream>

using namespace std;

int remainder(int a, string b)
{int r=0;
    for(int i =0;i<b.length();i++)
    {
       r = (10*r + (b[i]-'0'))%a;
    }
    return r;

}

int gcd(int a, int b)
{

    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{

    int T,a;
    string b;
    cin>>T;

    while(T>0)
    {
        cin>>a>>b;

        if(a==0)
            cout<<b<<"\n";
        else
        {
            int r = remainder(a, b);
            cout<<gcd(a,r)<<"\n";

        }

        T--;

    }
    return 0;
}
