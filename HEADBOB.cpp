#include <iostream>
#include <string>
using namespace std;

int checknatio(char c[], int n)
{

    for(int i=0;i<n;i++)
    {
        if(c[i]=='I')
            return 1;
        if(c[i]=='Y')
            return 0;
    }
    return 2;
}

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        char c[n];
        cin>>c;

        int flag = checknatio(c, n);
        if(flag == 1)
            cout<<"INDIAN\n";
        else if(flag ==0)
            cout<<"NOT INDIAN\n";
        else
            cout<<"NOT SURE\n";

        T--;

    }
    return 0;
}
