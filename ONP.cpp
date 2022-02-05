#include <iostream>
#include <stack>
#include <string>


using namespace std;



int main()
{
    stack <string> s;

    int T,n;
    string exp;
    string op, a, b;

    string res="";
    cin>>T;

    while(T>0)
    {
        cin>>exp;
        for(int i=0;i<exp.length(); i++)
        {
            if(exp[i]==')')
            {
                a= s.top();
                s.pop();
                op= s.top();
                s.pop();
                b= s.top();
                s.pop();
                res =b+ a + op;
                s.push(res);
            }
            else
                {if(exp[i]!='(')
                    s.push(exp.substr(i, 1));
                }

        }

        cout<<s.top()<<"\n";

        T--;

    }
    return 0;
}
