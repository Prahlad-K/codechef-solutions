#include <iostream>

using namespace std;

int main()
{

    int k,n;
    cin>>k>>n;
    string s[k];
    int i =0;
    while(k--)
    {
        cin>>s[i++];
    }

    string b;
    while(n>0)
    {
        cin>>b;

        if(b.length()>=47)
            cout<<"Good\n";
        else
        {
            bool good = false;
            for(int j =0;j<i;j++)
            {
                if(b.find(s[j])!=string::npos)
                    {good = true;break;}
            }
            if(good)
                cout<<"Good\n";
            else
                cout<<"Bad\n";
        }
        n--;
    }



    return 0;
}
