#include <iostream>
#include <set>

using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int a;
        set <int> s;
        for(int i =0;i<n;i++)
        {
            cin>>a;
            s.insert(a);
        }

        set <int> :: iterator itr;
        cout<<s.size()<<"\n";

        T--;

    }
    return 0;
}
