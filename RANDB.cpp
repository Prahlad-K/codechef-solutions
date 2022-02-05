#include <stdio.h>

using namespace std;

double tr1, tr2, rad1, rad2;

void calculate(int rev, double a, double angle, double t1)
{
    if(rev==0)
    {
        if(a>=360)
            a = a-360;
        if(t1>=tr1)
            calculate(1, a+angle, angle, t1-tr1);
        else
        {
            a = (t1*360)/tr1+a;
            if(a>=360)
                a = a-360;
            printf("%i ", 0);
            printf("%lf \n", a);
        }
    }
    else
    {
        if(a>=360)
            a = a-360;
        if(t1>=tr2)
            calculate(0, a+angle, angle, t1-tr2);
        else
        {
            a = 360 - (t1*360)/tr2 + a;
            if(a>=360)
                a = a-360;
            printf("%i ", 1);
            printf("%lf \n", a);
        }
    }
}

int main()
{

    int T;
    double R, r, p, a, t1;
    scanf("%i", &T);

    while(T>0)
    {
        scanf("%lf %lf %lf %lf %lf", &R, &r, &p, &a, &t1);

         rad1 = R-r;
         tr1 =(2*rad1)/p;
         rad2 = R+r;
         tr2 =(2*rad2)/p;
        calculate(0, 0, a, t1);

        T--;

    }
    return 0;
}
