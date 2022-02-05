#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int T,quan, price;
    cin>>T;

    while(T>0)
    {
        cin>>quan>>price;
        double amount = quan * price;

        if(quan > 1000)
            amount = amount *0.9;
        cout<<fixed<<amount<<"\n";

        T--;

    }
    return 0;
}
