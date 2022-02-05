#include <bits/stdc++.h>
#define ll long long int
#define MAX 5000
const ll Mod = 1e9+7;
using namespace std;

ll power(ll x, ll y)
{
    ll res = 1;

    x = x % Mod;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % Mod;

        y = y>>1;
        x = (x*x) % Mod;
    }
    return res;
}
ll mod(ll x, ll p)
{
    x%=p;
    if(x<0)
        x+=p;
    return x;
}

ll triangle[MAX + 1][MAX + 1];

void makeTriangle() {
    int i, j;

    triangle[0][0] = 1;

    for(i = 1; i < MAX; i++) {
        triangle[i][0] = 1;
        for(j = 1; j <= i; j++) {
            triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i - 1][j])%(Mod-1);
        }
    }
}

ll C(ll n, ll r) {
    return triangle[n][r];
}

int main()
{

    int T,n,k;
    scanf("%i", &T);
    makeTriangle();

    while(T>0)
    {
        scanf("%i", &n);
        scanf("%i", &k);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%i", &a[i]);
        }

        sort(a, a+n);

        ll ans =1, rem, res;

        rem = C(n-1, k-1);

        for(int i=1;i<n-1;i++)
        {
            res = mod(rem - mod(C(n-i-1, k-1) + C(i, k-1), Mod-1), Mod-1);
            ans = (ans * power(a[i], res))%Mod;
        }

        printf("%lli\n", ans);

        T--;
    }
    return 0;
}
