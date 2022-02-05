#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int T;
    double R,L,C,Vin;
    cin>>T;

    while(T>0)
    {
        cin>>R>>L>>C>>Vin;

        double ans = R*R*C;
        ans = ans / (4*L);
        ans = 1- ans;
        cout<<fixed<<setprecision(2)<<ans<<"\n";

        T--;

    }
    return 0;
}
