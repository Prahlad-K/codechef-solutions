#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double T, a, b, x2, y;
    long long V2, x;
    scanf("%lf", &T);

    while(T>0)
    {
        scanf("%lf", &a);
        scanf("%lf", &b);
        y = sqrt(a*a+b*b-a*b);
        x2 = a+b-y;
        x2=x2/3;

        x2 = round(x2);
        x = x2;

        V2 = x*(a-x)*(b-x);
        printf("%lli %lli \n", x, V2);
        T--;

    }
    return 0;
}
