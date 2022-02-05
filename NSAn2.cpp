#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T, y, min;
    string s;
    scanf("%i", &T);

    while(T>0)
    {
        cin>>s;
        int l = s.length();
        y=0;
        int right[l+1][26], left[l+1][26];

        for(int i=0;i<l+1;i++)
        {
            for(int j=0;j<26;j++)
            {
                right[i][j]=0;
                left[i][j]=0;
            }
        }

        for(int k=l-1;k>=0;k--)
        {
            for(int i=0;i<26;i++)
            {
                if(right[k+1][i]>0)
                    right[k][i]=right[k+1][i];

            }
            right[k][s[k]-'a']++;
            for(int i=s[k]-'a'+1;i<26;i++)
                y = y+right[k][i];
        }

        for(int k=0;k<l;k++)
        {
            for(int i=0;i<26;i++)
            {
                if(k>=1&&left[k-1][i]>0)
                    left[k][i]=left[k-1][i];
            }
            left[k][s[k]-'a']++;
        }

        int min = INT_MAX;
        int r, le, cost;
        cost = y;

        for(int i=0;i<l;i++)
        {
            char ori = s[i];
            while(s[i]>'a')
            {
                r =right[i][s[i]-'a'];
                le =left[i][s[i]-'a'-1];
                cost = cost-le+r+abs(ori-s[i]);
                if(cost<min)
                min = cost;
                cost = cost -abs(ori-s[i]);
                s[i]--;
            }
            s[i] = ori;
            cost = y;
            while(s[i]<'z')
            {
                r =right[i][s[i]-'a'+1];
                le =left[i][s[i]-'a'];
                cost = cost-r+le+abs(ori-s[i]);
                if(cost<min)
                    min = cost;
                cost = cost -abs(ori-s[i]);
                s[i]++;
            }
            s[i]=ori;
            cost = y;
        }
        if(y<min)
            min = y;
        cout<<min<<"\n";

        T--;

    }
    return 0;
}
