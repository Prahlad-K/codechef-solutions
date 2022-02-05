#include <stdio.h>
#include <string>
using namespace std;

char* power(int y)
{
    char* ans = new char;
    ans[0] = '1';
    for(int i=1;i<=y;i++)
        ans[i] ='0';

    ans[y+1]='\0';

    return ans;
}

int main()
{

    int T,n;
    scanf("%i", &T);

    while(T>0)
    {
        scanf("%i", &n);

        printf("%i ", 1);

        if(n%2==0)
        {
            printf("%s \n", power(n/2));
        }
        else
        {
            printf("%s \n", power(n-(n/2+1)));
        }

        T--;

    }
    return 0;
}
