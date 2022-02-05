#include <iostream>

using namespace std;

int main()
{

    int T,n, max;
    int a[1001], ctr=0;
    int answer;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        answer = n/2 + 1;

       a[ctr++]= answer;
        T--;

    }

    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";

    return 0;
}
