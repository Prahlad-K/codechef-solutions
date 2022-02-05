#include <iostream>

using namespace std;

int cycle[1001][1001], jarr[1001],i=0,j=0, count=0;


void findCycles(int a[], int visit[],int currin, int start)
{
    if(visit[currin]&&currin==start)
    {
        count++;
        cycle[i][j++]=currin;
        jarr[i++]=j;
        j=0;
        return;
    }
    visit[currin]=true;
    cycle[i][j++]=currin;
    findCycles(a, visit, a[currin], start);
}
int main()
{

    int n;

        cin>>n;
        int a[n], visit[n];

        for(int k=1;k<=n;k++)
            {cin>>a[k];
            visit[k]=false;}

        for(int k =1;k<=n;k++)
        {
            if(visit[k]==false)
            findCycles(a, visit, k, k);
        }

        cout<<count<<"\n";
        for(int k =0;k<i;k++)
        {
            for(int l =0;l<jarr[k];l++)
            {
                cout<<cycle[k][l]<<" ";
            }
            cout<<endl;
        }


    return 0;
}
