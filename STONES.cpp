#include <iostream>

using namespace std;

int main()
{

    int T;
    string s1, s2;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s1>>s2;
        int ctr=0;
        int c=0;

        s[c++]=s1[0];
        for(int i =1;i<s1.length();i++)
        {
            if(s1[i]!=s1[i-1])
            s[c++]=s1[i];

        }

        for(int j =0;j<c;j++)
        {for(int i =0;i<s2.length();i++)
        {
            if(s[j]==s2[i])
            {ctr++;}
        }
        }

        cout<<ctr<<"\n";

        T--;

    }
    return 0;
}
