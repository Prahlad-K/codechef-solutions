#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int T,n,A,B;
    cin>>T;
    int res=0;

    while(T>0)
    {
        cin>>n>>A>>B;

        int z=0,o=0;
        for(int i =0;i<n;i++)
           { if(A%2==0)
                z++;
             if(B%2==1)
                o++;

             A=A/2;
             B=B/2;
        }

        int ctr = min(n-z,n-o)+min(o,z);

        for(int i =0;i<ctr;i++)
        {
            res = res+pow(2, n-i-1);
        }
        cout<<res<<"\n";
        res=0;


        T--;

    }
    return 0;
}
