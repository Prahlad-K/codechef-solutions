#include <iostream>
#include <cmath>
using namespace std;


int countn(int p, int n)
{int num;

    for(int i=1;i<13;i++)
    {
        if(p==pow(2, i-1))
        {
          num = pow (2, i-1);
          return n+1;
        }

        if(p<pow(2, i-1))
        {
          num = pow (2, i-2);
          return countn(p-num, n+1);
        }
    }

    return countn(p-2048, n+1);

}

int main()
{

    int T,p, n=0;
    int a[6], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>p;

        a[ctr++]= countn(p, n);
        T--;

    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}


