#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
        return a;
    return GCD(b, a%b);
}

int LCM(int a, int b)
{
    int gcd = GCD(a,b);
    return (a*b)/gcd;
}
int main()
{

    int T,n,q;
    cin>>T;

    while(T>0)
    {
        cin>>n>>q;
        int a[n+1];int cum[n+1];
        for(int i =1;i<=n;i++)
            {cin>>a[i];
            if(i>=2)
                cum[i]=cum[i-1]+a[i];
            else
                cum[1]=a[1];
            }

        int flag,l,r,i,x;

        while(q--)
        {
            cin>>flag;
            if(flag ==2)
            {cin>>i>>x;
            a[i]=x;}
            else
            {
                cin>>l>>r;
                int max, mode;
                max = -1;
                for(int i=l;i<=r;i++)
                {
                    if(a[i]>max)
                    {
                        max= a[i];
                        mode = i;
                    }
                }
                int total = cum[r],index; int median; double avg, x;
                if(total%2!=0)
                {
                    index = (total+1)/2;
                    for(int i=l;i<=r;i++)
                    {
                        if(cum[i]>index)
                        median = i;
                    }
                }
                else
                {
                    index = total/2;
                    for(int i=l;i<=r;i++)
                    {
                        if(cum[i]>=index&&cum[i]>=index+1)
                        {
                            avg= i;
                            break;
                        }
                        else if(cum[i]==index&&cum[i]<index+1)
                        {
                            x =i;
                            avg =(2*x+1)/2;
                            break;
                        }
                    }
                    median = floor(avg);
                }
                cout<<LCM(mode, median)<<"\n";

            }

        }

        T--;

    }
    return 0;
}
