#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

typedef struct trnode
{
        bool end=false;
        trnode* ptr[26];

}*TRPTR;


TRPTR getNode()
{
    TRPTR newnode = new trnode;
    newnode->end = false;
    for(int i =0;i<26;i++)
        newnode->ptr[i]=NULL;
    return newnode;
}

void insert(TRPTR T, string s)
{
    for(int i =0;i<s.length();i++)
    {
        if(!T->ptr[s[i]-'a'])
        T->ptr[s[i]-'a'] = getNode();
        T = T->ptr[s[i]-'a'];
    }
    T->end = true;
}

string pre;int c=0;

void findStrings(TRPTR T)
{
    if(T->end)
     return;
    for(int i=0;i<26;i++)
    {
        if(T->ptr[i])
        {
            pre[c++]=i+'a';
            findStrings(T->ptr[i]);
            break;
        }
    }
}

void getLongestPrefix(TRPTR T, string p)
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

    findStrings(T);
}

int main()
{
    int T,Q,R;
    string s;
    cin>>T;
   vector <string> stray;


    for(int i =0;i<T;i++)
    {
        cin>>s;
        stray.push_back(s);
    }
    cin>>Q;
    string p;
    while(Q--)
    {
        TRPTR root=getNode();
        cin>>R>>p;

        for(int i =0;i<R;i++)
            insert(root, stray[i]);
        getLongestPrefix(root,p);
      for(int i=0;i<c;i++)
        cout<<pre[i];
        c=0;
      cout<<endl;
    }

}
