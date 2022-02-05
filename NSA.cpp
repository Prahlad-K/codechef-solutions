#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T;
    string s;
    scanf("%i", &T);

    while(T>0)
    {
        cin>>s;

        int l = s.length();
        int y=0;
        int sm[l];
        int arr[l];
        int c=0;
        int x,z;

        for(int i=0;i<l;i++)
            sm[i]=INT_MAX;

        for(int i=0;i<l;i++)
        {
            for(char c = i+98;c<='z';c++)
            {

            }
        }

        cout<<y<<endl;

        for(int i=l-1;i>=0;i--)
        {
            cout<<s[i]<<": ";
            for(int j=i-1;j>=0;j--)
            {
                if(s[i]>s[j])
                {
                    x = s[i]-s[j];
                    arr[c++]=x;
                }
            }
            sort(arr, arr+c);
            for(int k=0;k<c;k++)
            {
                z=arr[k]-(k+1);
                cout<<z<<" ";
                if(z<sm[i])
                    sm[i]=z;
            }
            c=0;
            cout<<endl;
        }

        int min = sm[0];

        for(int i=1;i<l;i++)
        {
            if(sm[i]<min)
            {
                min=sm[i];
            }
        }

        for(int i=0;i<l;i++)
            cout<<sm[i]<<" ";
        cout<<endl;

        if(min<0)
            printf("%i\n", y+min);
        else
            printf("%i\n", y);

        T--;

    }
    return 0;
}
