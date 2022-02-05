#include <iostream>
#include <algorithm>

using namespace std;

int index =0;
bool contains(int done[], int m, int x)
{
    for(int i =index;i<m;i++)
    {
        if(done[i]==x)
            {index++;
                return true;}

    }
    return false;
}

int main()
{

    int T,n, m;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m;

        int done[m];
        for(int i =0;i<m;i++)
        {
            cin>>done[i];
        }

        sort(done, done+m);

        int chef[(n-m)/2+1], c=0;
        int ass[(n-m)/2+1], a=0;

        int ctr =0;
        for(int i =1;i<=n;i++)
        {
            if(!contains(done, m, i))
            {
                ctr++;
                if(ctr%2==1)
                chef[c++]=i;
                else
                ass[a++]=i;

            }

        }

        for(int i =0;i<c;i++)
            cout<<chef[i]<<" ";
            cout<<endl;
        for(int i =0;i<a;i++)
            cout<<ass[i]<<" ";
            cout<<endl;

            c=0;
            a=0;
            ctr=0;
            index =0;


        T--;

    }
    return 0;
}
