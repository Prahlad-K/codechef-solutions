#include <iostream>

using namespace std;

int main()
{

    long long int a;
        cin>>a;

        if((a-3)%6==0||(a-1)%6==0||a%6==0)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";

    return 0;
}
