#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector <int> v (a, a+n);

    sort(v.begin(), v.end());
    for(vector<int>::iterator i = v.begin(); i!=v.end(); ++i)
        cout<<*i<<"\n";

}
