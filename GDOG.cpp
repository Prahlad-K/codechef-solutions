#include <iostream>

using namespace std;

int main()
{

    int T,n, k;
    cin>>T;

    while(T>0)
    {
        cin>>n>>k;

        int max = n%2;
        for(int i=2;i<=k;i++)
        {
            if(n%i>max)
                max = n%i;

        }
        cout<<max<<"\n";

        T--;

    }
    return 0;
}
