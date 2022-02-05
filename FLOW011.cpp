#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int T;
    double bas, hra, da, gross;
    cin>>T;

    while(T>0)
    {
        cin>>bas;

        if(bas<1500)
        {
            hra = bas * 0.1;
            da = bas *0.9;
        }
        else
        {
            hra = 500;
            da = bas * 0.98;
        }

        gross = bas + hra + da;
        cout<<fixed<<setprecision(2)<<gross<<"\n";

        T--;

    }
    return 0;
}
