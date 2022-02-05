#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T,n,k;
    scanf("%i", &T);

    while(T>0)
    {
        scanf("%i", &n);
         scanf("%i", &k);
        int a[n];

        for(int i=0;i<n;i++)
        {
            //scanf("%i", &a[i]);
            a[i] = i+1;
        }

        int optsize = pow(2, n);

        int *sub = new int;
        int c=0;
        long long ans=1;
        for(int i=1;i<optsize;i++)
        {
            if(__builtin_popcount(i)==k)
            {
                c=0;
                long long int prod=1, max, min;
                for(int j =0;j<n;j++)
                {
                    if(i&(1<<j))
                    {
                        sub[c++]=a[j];
                       // cout<<a[j]<<" ";
                    }
                }
                max = *max_element(sub, sub+c);
                min = *min_element(sub, sub+c);
                //cout<<max<<" max "<<min<<" min\n";
                for(int k=0;k<c;k++)
                {
                    if(sub[k]!=max&&sub[k]!=min)
                        prod=(prod*sub[k])%1000000007;
                }
                ans= (ans*prod)%1000000007;

                //cout<<"Original "<<ans<<endl;
            }
        }

        printf("%lli\n", ans);
        T--;
    }
    return 0;
}
