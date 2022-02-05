#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a, n;
    cin>>n;
    set<long int> s;


    for(long int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }

    cout<<s.size();

    return 0;
}
