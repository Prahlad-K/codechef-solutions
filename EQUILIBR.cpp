#include<bits/stdc++.h>
#define ll long long int

const ll mod = 1e9+7;
using namespace std;

ll power(ll x, ll y)
{
    ll res = 1;

    x = x % mod;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;

        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}


ll modInverse(ll a, ll m)
{
       return power(a, m-2);
}


int main()
{
    ll n, k;
    scanf("%lli", &n);
    scanf("%lli", &k);

    ll q, p;
    q = power(2, n-1);
    p = q-n;
    cout<<(p*modInverse(q, mod))%mod;

    return 0;
}
