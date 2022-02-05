#include <iostream>

using namespace std;

int main()
{

    int T;
    string s;
    int ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>s;
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j =0;j<s.length();j++)
            {
             if(s[i]==s[j])
             {
                 ctr++;
             }
            }
            if(ctr>max)
                max= ctr;
            ctr=0;

        }

        if(s.length()%2==0&&max==s.length()/2)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        T--;
    }
    return 0;
}
