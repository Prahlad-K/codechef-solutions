#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int T,k,x,y;
    string s,s1;
    cin>>T;

    while(T>0)
    {
        cin>>k;

        char c ='a';

        for(int i =0;i<26;i++)
        {
            s=s+c;
            c++;
        }
        c='z';
        for(int i =0;i<26;i++)
        {
            s1 = s1+c;
            c--;
        }

        x = k/25;
        y = k%25;

        if(x!=0)
        {
            if(y!=0)
            for(int i =26-y-1;i<26;i++)
                cout<<s1[i];

        for(int i=0;i<x;i++)
             cout<<s1;
        }
        else
        {
            for(int i =26-k-1;i<26;i++)
                cout<<s1[i];
        }
        s="";
        s1="";
        cout<<endl;

        T--;

    }
    return 0;
}
