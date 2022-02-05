#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[100001];

    while(n!=0)
   {
       for(int i=1;i<n+1;i++)
       {
           cin>>a[i];

       }
       int j;

       for(int i=1;i<n+1;i++)
       {
           j=a[i];
           if(a[j]!=i)
            { cout<<"not ambiguous\n";break;}
           if(i==n)
            cout<<"ambiguous\n";
       }

    cin>>n;
   }


    return 0;
}
