#include <iostream>

using namespace std;

int main()
{

    int T;
    double h, c, ts;
    bool ha= false, ca=false, tsen=false;
    cin>>T;

    while(T>0)
    {
        cin>>h>>c>>ts;

        if(h>50)
            ha = true;
        if(c<0.7)
            ca = true;
        if(ts>5600)
            tsen = true;

        if(ha&&ca&&tsen)
            cout<<10<<"\n";
        else if(ha&&ca)
            cout<<9 <<"\n";
        else if(ca&&tsen)
            cout<<8 <<"\n";
        else if(ha &&tsen )
            cout<<7 <<"\n";
        else if(ha||ca||tsen)
            cout<<6 <<"\n";
        else
            cout<<5<<"\n";

        ha = false;
        ca = false;
        tsen = false;

        T--;

    }
    return 0;
}
