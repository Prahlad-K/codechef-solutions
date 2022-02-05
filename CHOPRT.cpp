#include <iostream>

using namespace std;

int main()
{

    int T,a, b;
    cin>>T;

    while(T>0)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">\n";
        else if(a==b)
            cout<<"=\n";
        else
            cout<<"<\n";

        T--;

    }
    return 0;
}
