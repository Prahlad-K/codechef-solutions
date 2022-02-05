#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{

    int T,n,m;
    scanf("%i", &T);

    while(T>0)
    {
        scanf("%i", &n);
        scanf("%i", &m);
        int a, count=0;

        for(int i=0;i<n;i++)
        {
            scanf("%i", &a);
            if(a%m==0)
                count++;
        }

       long long ans = pow(2, count)-1;
       printf("%lli\n", ans);

        T--;

    }
    return 0;
}
