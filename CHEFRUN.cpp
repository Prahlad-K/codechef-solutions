#include <iostream>

using namespace std;

int main()
{

    int T;
    double x1,x2,x3,v1,v2;
    cin>>T;

    while(T>0)
    {
        cin>>x1>>x2>>x3>>v1>>v2;

        double t1 = (x3-x1)/v1;
        double t2 = (x2-x3)/v2;

        if(t1<t2)
            cout<<"Chef\n";
        else if(t1>t2)
            cout<<"Kefa\n";
        else
            cout<<"Draw\n";

        T--;

    }
    return 0;
}
