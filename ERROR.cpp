#include <iostream>
#include <string>
using namespace std;

int main()
{

    int T;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s;
       int l1 = s.find("101");
       int l2 = s.find("010");
        if((l1>=0&&l1<=s.length()-1)||(l2>=0&&l2<=s.length()-1))
            cout<<"Good\n";
        else
            cout<<"Bad\n";


        T--;

    }
    return 0;
}
