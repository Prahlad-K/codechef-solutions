#include <iostream>

using namespace std;


int main()
{
     int n;
     long int h;

    cin>>n>>h;

    long int a[n];

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    char *seq = new char;
    long int l =0;
    do
    {cin>>seq[l];
    }while(seq[l++]!='0');

    int sno =0;bool picked = false;
    for(long int i =0;i<l;i++)
    {
        if(seq[i]=='1')
        {
            if(sno!=0)
                sno--;
        }
        else if(seq[i]=='2')
        {
            if(sno!=n-1)
                sno++;
        }
        else if(seq[i]=='3')
        {
            if(!picked&&a[sno]!=0)
            {
                picked = true;
                a[sno]--;
            }
        }
        else if(seq[i]=='4')
        {

            if(picked&&a[sno]!=h)
            {
                picked = false;
                a[sno]++;
            }
        }
        else
            break;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";



    return 0;
}
