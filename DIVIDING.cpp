#include <iostream>

using namespace std;

int main()
{

    int n;
        cin>>n;
        int sum=0;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum = sum +a;
        }

        if((n*(n+1))/2==sum)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    return 0;
}
