#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int T,n,a,b;
    cin>>T;

    while(T>0)
    {
        cin>>n>>a>>b;
        int dice[n];
        double ca=0, cb=0;
        for(int i =0;i<n;i++)
        {
            cin>>dice[i];
            if(dice[i]==a)
            ca++;
            if(dice[i]==b)
            cb++;
        }
        double p1 = ca/n;
        double p2 = cb/n;

        double prob = p1*p2;
        cout<<fixed<<setprecision(10)<<prob<<"\n";



        T--;

    }
    return 0;
}
