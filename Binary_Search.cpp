#include <iostream>

using namespace std;

bool binarysearch(int l, int h, int a[], int x)
{
    if(l<h)
    {int mid = (l+h)/2;

    if(a[mid]==x)
       return true;

    else if(a[mid]<x)
        return binarysearch(l,mid-1,a,x);
    else
        return binarysearch(mid+1,h,a,x);
    }
    else
    return false;

}

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        int x;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
            cin>>a[i];

        cin>>x;

        if(binarysearch(0,n-1,a,x))
            cout<<"Found\n";
        else
            cout<<"Not Found\n";

        T--;

    }
    return 0;
}
