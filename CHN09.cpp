#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int T, ctr=0;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                ctr++;
        }

        int l = s.length();
        cout<<min(ctr, l-ctr)<<"\n";
        ctr=0;

        T--;

    }
    return 0;
}
