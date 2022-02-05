#include<bits/stdc++.h>
using namespace std;
#define N 1000000007;
long long int powi(long long int k,long long int n)
{
    long long int p=1;
    k=k%N;
    while(n>0)
    {
        if(n%2==1)
            p=(p*k)%N;
            k=(k*k)%N;
        n=n/2;
    }
    return p;
}
/* long int comb( int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    double result = (double)n;
    for( int i = 2; i <= k; ++i ) {
        result = fmod((result* (n-i+1)),1000000007);
        result /= i;
    }
    return (long long int)result;
}*/
long long int arr[5002][5002];
void printPascal()
{
  //int arr[n][n]; // An auxiliary array to store generated pscal triangle values
  int n=5001;
  // Iterate through every line and print integer(s) in it
  for (long long int line = 0; line < n; line++)
  {
    // Every line has number of integers equal to line number
    for (long long int i = 0; i <= line; i++)
    {
      // First and last values in every row are 1
      if (line == i || i == 0)
           arr[line][i] = 1;
      else // Other values are sum of values just above and left of above
           arr[line][i] = (arr[line-1][i-1]%1000000007 + arr[line-1][i]%1000000007)%N;
    }
  }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    long long int t,n,k;
    cin>>t;
    printPascal();
    while(t--)
    {
        cin>>n>>k;
        //vector<long long int>v;
        long long int v[5002];
        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v,v+n);
        long long int y=1;
       /* for(int i=1;i<n-1;i++)
            p=(p*v[i])%N;
        long long int x=p;
        for(int j=n-1,y=1;y<=n-k;j--,y++)
        {
            cout<<x<<" "<<p<<endl;
            x=(x/v[y]);
            p=(p*powi(x,((j-k+1)*(j-k+2)/2)))%N;
        }*/
        long long int K=n-2;
        //long long int p[10000];
        for(long long int i=1;i<n-1;i++)
        {
            long long int power=0;
            for(long long int j=1;j<=i&&j<k-1;j++)//k-2 positions
            {
                //cout<<i<<"c"<<j-1<<"="<<arr[i][j-1]<<" * "<<K<<"c"<<k-j<<"="<<arr[K][k-j]<<endl;
                long long int r=1,p,q;
                if(i<j)
                    p=0;
                else
                    p=arr[i][j];
                if(K<k-j-1)
                    q=0;
                else
                    q=arr[K][k-j-1];
                r=(r*p)%N;
                r=(r*q)%N;
                power=(power+r)%N;
               // cout<<power<<" ";
            }
            K--;
            //cout<<power<<" "<<v[i]<<" ";
            y=((y)*powi(v[i],power))%N;
            //cout<<power<<" "<<y<<endl;
        }
        cout<<y<<endl;
    }
}
