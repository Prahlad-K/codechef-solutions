#include <iostream>

using namespace std;

int main()
{

    int T,n, sum =0;
    int count=0;
    int a[100001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;

        while(true)
        {
            if (count ==0)
                {sum = sum+ n%10;count++;}

            n = n /10;
            if(n<10)
                {sum = sum + n;break;}
        }
        a[ctr++]=sum;
        sum =0;
        count =0;

     T--;
    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
