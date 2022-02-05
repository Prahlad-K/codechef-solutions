#include <iostream>

using namespace std;

int main()
{

    int T,x1,y1,x2,y2,x3,y3, ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        int y21,y31,y23,x21,x31,x23;

        y21= y2-y1;
        y31= y3-y1;
        y23= y2-y3;

        x21= x2-x1;
        x31= x3-x1;
        x23= x2-x3;

        if(y21*y31+x21*x31==0)
            ctr++;
        else if(y23*y31+x23*x31==0)
            ctr++;
        else if(y21*y23+x21*x23==0)
            ctr++;
        T--;

    }
    cout<<ctr;
    return 0;
}
