#include <iostream>

using namespace std;

int GCD(int a, int b)
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

    int T,a,b, gcd;
    cin>>T;

    while(T>0)
    {
        cin>>a>>b;
        gcd=GCD(a,b);

        cout<<(a*b)/(gcd*gcd)<<"\n";

        T--;

    }
    return 0;
}
