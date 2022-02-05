#include <iostream>

using namespace std;

int main()
{

    int T,n;
    long long int ans;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>n>>s;
        long long int ctr=0;

        for(int j =0;j<n;j++)
        {
            if(s[j]=='1')
                {ctr++;
                }
        }
        ans = (long long) ((ctr*(ctr+1)/2));

        cout<<ans<<"\n";


        T--;

    }
    return 0;
}
