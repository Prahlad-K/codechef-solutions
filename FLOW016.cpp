#include <iostream>

using namespace std;

long long int GCD(long long int a, long long int b)
{

    if(a==0||b==0)
        return 0;
    if(a==b)
        return a;
    if(a>b)
        return GCD(a-b, b);
    return GCD(a, b-a);
}

int main()
{

    long long int T,a, b, lcm, gcd;
    cin>>T;

    while(T>0)
    {
        cin>>a>>b;
        gcd = GCD(a,b);
        lcm = (a*b)/gcd;

        cout<<gcd<<" "<<lcm<<"\n";

        T--;

    }
    return 0;
}
