#include <iostream>

using namespace std;

int main()
{

    int T;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s;

        int l =1,ctr=1,count =0;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='.')
                ctr++;
            else
            {
                if(l<ctr)
                {
                  count++;
                  l=ctr;
                }
                  ctr=1;
            }
        }

        cout<<count<<"\n";

        T--;

    }
    return 0;
}
