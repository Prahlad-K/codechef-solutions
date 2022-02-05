#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

typedef struct trnode
{
        bool end=false;
        trnode* ptr[26];
        int num=-1;

}*TRPTR;


TRPTR getNode()
{
    TRPTR newnode = new trnode;
    newnode->end = false;
    for(int i =0;i<26;i++)
        newnode->ptr[i]=NULL;
    return newnode;
}

void insert(TRPTR T, string s, int in)
{
    for(int i =0;i<s.length();i++)
    {
        if(!T->ptr[s[i]-'a'])
        T->ptr[s[i]-'a'] = getNode();
        T = T->ptr[s[i]-'a'];
    }
    if(T->num==-1)
    T->num = in;
    T->end = true;
}

string pre;int c=0;
bool found = false;
void findStrings(TRPTR T, int R)
{
    if(T->end&&T->num<R)
     {
         found = true;
        return;
     }
    for(int i=0;i<26;i++)
    {
        if(T->ptr[i])
        {
            pre[c++]=i+'a';
            findStrings(T->ptr[i],R);
            if(found)
                return;
            c--;
        }
    }
}


void getLongestPrefix(TRPTR T, string p, int R)
{
    int index;
    for(int i =0;i<p.length();i++)
    {
        index = p[i]-'a';
        if(T->ptr[index])
        {
            pre[c++]=p[i];
            T = T->ptr[index];
        }
        else
        break;
    }

    findStrings(T,R);

}

int main()
{
    int T,Q,R;
    string s;
    cin>>T;
   vector <string> stray;


        TRPTR root=getNode();
    for(int i =0;i<T;i++)
    {
        cin>>s;
        stray.push_back(s);
        insert(root, s, i);
    }
    cin>>Q;
    string p;
    while(Q--)
    {
        cin>>R>>p;

        getLongestPrefix(root,p,R);
      if(found)
      {for(int i=0;i<c;i++)
        cout<<pre[i];
      cout<<endl;
      }
      c=0;
      found = false;
    }


}
