#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double volume(double h, int S, int P)
{
    return ((S*h/2)-(h*h*P)/4 + h*h*h);
}

int main()
{

    int T,P,S;
    cin>>T;

    while(T>0)
    {
        cin>>P>>S;

        double l, b, h1,h2, V1,V2;

        h1 = ((P/6)+sqrt((P*P/36)-(2*S/3)))/2;
        h2 = ((P/6)-sqrt((P*P/36)-(2*S/3)))/2;

        V1 = volume(h1,S,P);
        V2 = volume(h2,S,P);

        cout<<fixed<<setprecision(2)<<max(V1,V2)<<"\n";


        T--;

    }
    return 0;
}
