#include <iostream>

using namespace std;

bool isprime(int x)
{

    for(int i =2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{

    int T,x,y;
    cin>>T;

    while(T>0)
    {
        cin>>x>>y;

        int sum = x+y;

        int i =sum+1;
        while(!isprime(i))
        {
            i++;
        }
        cout<<i-sum<<"\n";

        T--;

    }
    return 0;
}
