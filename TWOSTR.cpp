#include <iostream>

using namespace std;

int main()
{

    int T,m=0;
    string s1, s2;
    cin>>T;

    while(T>0)
    {
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i]||s1[i]=='?'||s2[i]=='?')
                m++;

        }

        if(m==s1.length())
            cout<<"Yes\n";
        else
            cout<<"No\n";
        m =0;
        T--;

    }
    return 0;
}
