#include <iostream>
# define MOD 10000009
using namespace std;

int main()
{

    int T;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s;
        int l = s.length();
        int ans =1;
        int n=l/2;
        if(l%2!=0)
            n++;

        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[l-i-1]&&s[i]!='?'&&s[l-i-1]!='?')
            {
                ans =0;
                break;
            }
            else
            {
                if(s[i]=='?'&&s[l-i-1]=='?')
                    ans = (ans * 26)%MOD;

            }

        }

        cout<<ans<<"\n";

        T--;

    }
    return 0;
}
