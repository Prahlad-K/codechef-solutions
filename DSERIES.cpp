#include <iostream>
#define lar 1000000007
using namespace std;

int res[1000], res_size, ans_size=0;

void addfully(int *add, int* prod)
{
        int carry=1;
    for(int i =0;i<res_size;i++)
    {
        ans[i]= ans[i]+carry;
        if(ans[i]>9)
        {ans[i]=0;carry=1;}
        else
            carry=0;
    }
    if(carry==1)
        prod[res_size++]=1;


}
void add(int* prod)
{
    int carry=1;
    for(int i =0;i<res_size;i++)
    {
        prod[i]= prod[i]+carry;
        if(prod[i]>9)
        {prod[i]=0;carry=1;}
        else
            carry=0;
    }
    if(carry==1)
        prod[res_size++]=1;

}

void multiply(int res[], int x)
{
    int carry =0;

    int prod;
    for(int i =0;i<res_size;i++)
    {
        prod = res[i]*x+carry;
        res[i]=prod%10;
        carry = prod/10;
    }
    while(carry>0)
    {
        res[res_size++]=carry%10;
        carry = carry/10;
    }

}

int[] fact(long long int n)
{
    res[0]=1;
     res_size=1;
    for(long long int i =2;i<=n;i++)
    {
        multiply(res, i);
    }
    return res;

}

int main()
{
    long long int Q,T,n;
    cin>>Q;
    int* prod, ans;
    prod = new int[1000];
    ans = new int[1000];

    while(Q>0)
    {
        cin>>n>>T;

        prod = fact(T+1);
         ans = prod;

        for(long long int i =1;i<n;i++)
        {
             add(prod);
             multiply(prod, T/(i+1));
            ans = ans + prod;

        }
        long long int fin = ans%lar;
        cout<<fin<<"\n";

        Q--;
    }
    return 0;
}
