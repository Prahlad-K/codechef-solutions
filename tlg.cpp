#include <iostream>

using namespace std;

int main()
{
    int T;
    int test[1001];
    int flag[1001];
    int ctr=0;
    int a, b;
    cin>>T;
    while(T>0)
    {
            cin>>a>>b;
            if(a>b)
            {test[ctr]= a-b;
            flag[ctr++]=1;}
            else
            {test[ctr]= b-a;
            flag[ctr++]=2;}
    T--;

    }

    int max = test[0];

    int p=0;
    for(int i=0;i<ctr;i++)
    {
        if(test[i]>max)
           {
             max = test[i];
             p=i;
           }
    }
    cout<<flag[p]<<" "<<test[p]<<"\n";

    return 0;

}
