#include <iostream>

using namespace std;

int main()
{

    int T,n, ans=0;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        cin>>s;

        for(int i =0;i<n;i++)
        {
            if(s[i]=='1')
            {ans++;
                if(i==0)
                {
                    if(s[1]=='0')
                      {
                         ans++;
                         s[1]='2';
                      }
                }
                else if(i==n-1)
                {
                    if(s[i-1]=='0')
                        {ans++;
                        s[i-1]='2';}
                }
                else
                {
                    if(s[i-1]=='0')
                        {ans++;
                        s[i-1]='2';}

                    if(s[i+1]=='0')
                        {ans++;
                        s[i+1]='2';}
                }

            }
        }

        cout<<n-ans<<"\n";
        ans =0;
        T--;

    }
    return 0;
}
