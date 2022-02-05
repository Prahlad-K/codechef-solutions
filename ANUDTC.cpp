#include <iostream>

using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        if(360%n==0)
            cout<<"y ";
        else
            cout<<"n ";

        if(n<=360)
            cout<<"y ";
        else
            cout<<"n ";

        if((n*(n+1))/2<=360)
            cout<<"y\n";
        else
            cout<<"n\n";

        T--;

    }
    return 0;
}

