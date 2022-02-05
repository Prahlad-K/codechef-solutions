#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int T;
    string s, s1, s2;

    cin>>T;

    while(T>0)
    {
        cin>>s;
        int l = s.length();
        s1 = s.substr(0, l/2);
        if(l%2==0)
        s2 = s.substr(l/2, l-1);
        else
        s2 = s.substr(l/2+1, l-1);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1.compare(s2)==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        T--;

    }
    return 0;
}
