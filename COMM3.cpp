#include <iostream>
#include <cmath>
using namespace std;


double length(int a, int b, int c, int d)
{
    return sqrt(pow(abs(a-c), 2)+pow(abs(b-d), 2));
}
int main()
{

    int T,R, a1, b1, a2, b2, a3, b3;double l12, l23, l31;
    cin>>T;

    while(T>0)
    {
        cin>>R;
        cin>>a1>>b1;
        cin>>a2>>b2;
        cin>>a3>>b3;
        l12 = length(a1, b1, a2, b2);
        l23 = length(a2, b2, a3, b3);
        l31 = length(a3, b3, a1, b1);

        if(l12<=R&&l23<=R||l12<=R&&l31<=R||l23<=R&&l31<=R)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";

        T--;

    }
    return 0;
}
