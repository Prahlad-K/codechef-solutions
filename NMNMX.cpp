#include <bits/stdc++.h>
#define ll long long int
const ll maxn = 1e5+1, Mod = 1e9+7;
using namespace std;

ll fact[maxn], ifact[maxn], inv[maxn];

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

ll inverse(ll x, ll p)
{
    x = mod(x, p);

    if(x==1)
        return x;
    return mod((-p/x) * (inv[p%x]% p), p);
}


ll NcR(ll n, ll r, ll p) {
    if(r>n)
        return 0;
    ll ret = (1LL * ifact[n - r] * ifact[r]) % p ;
	ret = (1LL * ret * fact[n]) % p;
    return ret;
}


int main()
{

    int T,n,k;
    scanf("%i", &T);
    fact[0] = 1;
    for(int i = 1; i < maxn; i++) {
        fact[i] = fact[i - 1] * i % (Mod);
    }

    ifact[0] = 1;
    for(int i = 1; i < maxn; i++) {
        inv[i] = inverse(i, Mod);
        ifact[i] = (ifact[i - 1] * inv[i]) % (Mod);
    }

    while(T>0)
    {
        scanf("%i", &n);
        scanf("%i", &k);
        int a[n];
        for(int i=0;i<n;i++)
        {
            //scanf("%i", &a[i]);
            a[i]=i+1;
        }

        sort(a, a+n);

        ll ans =1, rem, res;

        rem = NcR(n-1, k-1, Mod-1);
        cout<<rem<<"\n";

        for(int i=1;i<n-1;i++)
        {
            cout<<NcR(n-i-1, k-1, Mod-1)<<"\n";
            cout<<NcR(i, k-1, Mod-1)<<"\n";
            res =  mod(rem - NcR(n-i-1, k-1, Mod-1) - NcR(i, k-1, Mod-1), Mod-1);
            ans = (ans * power(a[i], res)) % Mod;
        }
        printf("%lli\n", ans);

        T--;
    }
    return 0;
}
