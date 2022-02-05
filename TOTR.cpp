#include <iostream>

using namespace std;

string M;
char getAlpha(char c)
{
    return (M[((int)c-97)]);
}


int main()
{

    int T,conv;
    string s,ans;
    cin>>T>>M;
    while(T>0)
    {
        cin>>s;
        ans="";
        char a; int index;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='_')
                a=' ';
            else if(s[i]=='?'||s[i]=='.'||s[i]==','||s[i]=='!')
                a=s[i];
            else
            {

                if(s[i]>='A'&&s[i]<='Z')
                {
                    a=s[i];
                    a = a+32;
                    a = getAlpha(a);
                    a = a-32;
                }
                if(s[i]>='a'&&s[i]<='z')
                {
                    a=s[i];
                    a = getAlpha(a);
                }
            }
            ans=ans+a;
        }

        cout<<ans<<"\n";

        T--;

    }

    return 0;
}
