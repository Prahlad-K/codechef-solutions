#include <iostream>

using namespace std;

int main()
{

    int T,n,m;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m;

        int sieve[m];
        for(int i =1;i<m;i++)
            sieve[i]=0;

        for(int i =2;i<m;i++)
        {
            if(sieve[i]==0)
            {for(int j=i;j<m;j+=i)
            sieve[j]+=1;}
        }

        long int sum =0;
        for(int i=n;i<m;i++)
        {
         sum = sum + sieve[i];
        }

        cout<<sum<<"\n";

        T--;

    }
    return 0;
}
