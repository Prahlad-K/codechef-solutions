#include <iostream>

using namespace std;

int main()
{

    int a,b, diff;

        cin>>a>>b;

        diff = a-b;

        if(diff%10!=0)
        diff = diff - 1;
        else
        diff = diff + 1;

        cout<<diff<<"\n";




    return 0;
}
