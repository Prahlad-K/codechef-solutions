#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T, y, min;
    string s;
    set <char> str;
    scanf("%i", &T);

    while(T>0)
    {
        cin>>s;
        int l = s.length();
        for(int i=0;i<l;i++)
            str.insert(s[i]);
        y=0;
        int cost[l];
        int total =0;

        for(int k=0;k<l;k++)
        {
            for(int j=k+1;j<l;j++)
            {
                if(s[k]<s[j])
                    y++;
            }
            cost[k]=y;
            total +=cost[k];
            y=0;
        }
        y = total;
        min = y;
        char rep, ori;
        int ctr =0;
        for(int i=0;i<l;i++)
        {
            ori = s[i];
            for(set <char>::iterator it = str.begin();it!=str.end();it++)
            {
                rep = *it;
                s[i] = rep;
                    for(int k=0;k<i;k++)
                    {
                        if(s[k]<ori)
                        {
                            if(s[k]>=rep)
                                y--;
                        }
                        else
                        {
                            if(s[k]<rep)
                                y++;
                        }
                    }

                    y = y-cost[i];
                    for(int m=i;m<l;m++)
                    {
                        if(s[i]<s[m])
                            y++;
                    }

                y = y+abs(ori-rep);
                if(y<min)
                    min = y;
                y=total;

            }
            s[i]=ori;
        }
        printf("%i\n", min);

        T--;

    }
    return 0;
}
