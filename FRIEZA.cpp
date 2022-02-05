#include <iostream>
#include <string>
using namespace std;

int main()
{

    int T;
    string s;
    cin>>T;

    while(T>0)
    {
        cin>>s;

        string f = "frieza";
      string R;
        int g=0,b=0;
        bool bchange = false, gchange = false;

        for(int i =0;i<s.length();i++)
        {
            if(f.find(s[i])!=string::npos)
            {
                gchange = true;
                if(bchange)
                {R=R+to_string(b);
                b=0;}
                g++;
                bchange = false;
            }
            else
            {
                bchange = true;
                if(gchange)
                {R=R+to_string(g);
                g=0;}
                b++;
                gchange = false;
            }
        }
        if(gchange)
        {
            R=R+to_string(g);
                g=0;
        }
        else if(bchange)
        {
            R=R+to_string(b);
                b=0;
        }

        cout<<R<<"\n";

        T--;

    }
    return 0;
}
