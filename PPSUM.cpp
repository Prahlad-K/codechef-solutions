#include <iostream>

using namespace std;

int sum (int n)
{
    return (n*(n+1))/2;
}

int main()
{

    int T,d,n, f;
    cin>>T;

    while(T>0)
    {
        cin>>d>>n;
        f = n;
        for(int i =0; i<d;i++)
            f = sum(f);
        cout<<f<<"\n";


        T--;

    }
    return 0;
}
