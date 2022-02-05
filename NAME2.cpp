#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    int T;
    string m, l, temp;
    cin>>T;

    while(T>0)
    {
        cin>>m>>l;

        if(m.length()==l.length())
        {
            if(m.compare(l)==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
        {
           if(m.length()>l.length())
           {
               temp = m;
               m= l;
               l= temp;
           }
           int j =0;
           int match=true;
           for(int i =0;i<m.length();i++)
           {
               while(j<l.length()&&l[j]!=m[i])
                j++;

               if(j>l.length())
                match = false;
                j++;
           }

           if(match)
            cout<<"YES\n";
           else
            cout<<"NO\n";
        }

        T--;

    }
    return 0;
}
