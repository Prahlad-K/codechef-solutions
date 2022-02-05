#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

        }

        sort(s, s+n);

        int min = s[1]-s[0];
        for(int i =1;i<n;i++)
        {
            if(s[i]-s[i-1]<min)
                min = s[i]-s[i-1];
        }

        cout<<min<<"\n";

        T--;

    }
    return 0;
}
