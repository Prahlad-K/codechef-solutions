#include <iostream>

using namespace std;

int main()
{

    int T;
    string s1, s2;
    int l, q=0, m=0;
    cin>>T;

    while(T>0)
    {
        cin>>s1>>s2;
        l = s1.length();

        for(int i=0;i<l;i++)
        {
            if(s1[i]=='?'||s2[i]=='?')
                q++;
            if(s1[i]==s2[i]&&s1[i]!='?')
                m++;
        }

     cout<<l-m-q<<" "<<l-m<<"\n";
     q =0;
     m =0;

        T--;

    }
    return 0;
}
