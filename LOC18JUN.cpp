#include <stdio.h>
using namespace std;

int main()
{
    int n,l,r,c,q;
    char p;

    scanf("%i", &n);
    char arr[n][100];

    for(int i=0;i<n;i++)
    {
        scanf("%s", arr[i]);
    }

    scanf("%i", &q);
    while(q--)
    {scanf("%i %i %i %c", &l, &r, &c, &p);

    int count=0;
    for(int i=l-1;i<r;i++)
    {
        if(arr[i][c-1]==p)
            count++;

    }

    printf("%i\n", count);
    }

    return 0;
}
