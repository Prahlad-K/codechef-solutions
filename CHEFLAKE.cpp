#include <iostream>

using namespace std;
char l[301][301];
bool visit[301][301];
int n,m,ctr=0;
int paths(int cx,int cy)
{
    if(!visit[cx][cy]&&l[cx][cy]!='#')
    {
    if(cx==m-1&&cy==n-1)
        {cout<<ctr<<"\n";
            ctr++;}
    else
    {visit[cx][cy]==true;
        if(cx+1!=m)
        {paths(cx+1,cy);
        }
     if(cx!=0)
        {paths(cx-1,cy);
        }
     if(cy!=0)
        {paths(cx,cy-1);
        }
     if(cy+1!=n)
        {paths(cx,cy+1);
        }
    }
    return ctr;
    }
}
int main()
{

    int T;
    cin>>T;

    while(T>0)
    {
        cin>>n>>m;

     for(int i =0;i<n;i++)
     {
         for(int j =0;j<m;j++)
            {cin>>l[i][j];
            visit[i][j]=false;}
     }

     int cx=0,cy=3;
     cout<<paths(cx,cy)<<"\n";
     ctr=0;
        T--;

    }
    return 0;
}
