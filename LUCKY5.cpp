#include <iostream>

using namespace std;

int main()
{

    int T;
    string n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int ctr=0;

        for(int i =0;i<n.length();i++)
        {
            if(n[i]!='4'&&n[i]!='7')
                ctr++;
        }
        cout<<ctr<<"\n";

        T--;

    }
    return 0;
}
