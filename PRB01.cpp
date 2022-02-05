#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i<n;i++)
    {if(n%i==0)
    return false;}
    return true;

}

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;


        if(isPrime(n))
            cout<<"yes\n";
        else
            cout<<"no\n";

        T--;

    }
    return 0;
}
