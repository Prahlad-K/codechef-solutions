#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int T,L,D,S,c;
    cin>>T;

    while(T>0)
    {
        cin>>L>>D>>S>>c;

        if(log(c+1)*(D-1)>=log(L)-log(S))
            cout<<"ALIVE AND KICKING\n";
        else
            cout<<"DEAD AND ROTTING\n";

        T--;

    }
    return 0;
}
