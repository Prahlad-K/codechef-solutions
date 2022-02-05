#include <stdio.h>

using namespace std;

double tr1, tr2, rad1, rad2;

int main()
{

    int T;
    double R, r, p, angle, t1, x1,a;
    scanf("%i", &T);

    while(T--)
    {
        scanf("%lf %lf %lf %lf %lf", &R, &r, &p, &angle, &t1);

            rad1 = R-r;
            tr1 =(2*rad1)/p;
            rad2 = R+r;
            tr2 =(2*rad2)/p;

            a=0;

            int fac, x;

            x1 = t1/(tr1+tr2);
            x = x1;

            if(x==0)
            {
                if(t1<tr1)
                {
                    a = (t1*360)/tr1+a;
                    if(a>=360)
                        a = a-360;
                    printf("%i ", 0);
                    printf("%lf \n", a);
                }
                else
                {
                    a = angle;
                    t1 = t1-tr1;

                    a = 360 - (t1*360)/tr2 + a;

                    if(a>=360)
                        a = a-360;
                    if(angle==0)
                        a=0;

                    printf("%i ", 1);
                    printf("%lf \n", a);
                }
                continue;
            }

            t1 = t1 - x*(tr1+tr2);
            a = 2*x*angle;

            if(a>=360)
            {
                fac = (int)a/360;
                a = a-fac*360;
            }

            if(t1<tr1)
            {
                a = (t1*360)/tr1+a;
                if(a>=360)
                   a = a-360;
                printf("%i ", 0);
                printf("%lf \n", a);
            }
            else
            {
                a = a + angle;
                if(a>=360)
                    a = a-360;
                t1 = t1-tr1;

                a = 360 - (t1*360)/tr2 + a;

                if(a>=360)
                    a = a-360;
                if(angle==0)
                    a =0;

                printf("%i ", 1);
                printf("%lf \n", a);
            }

    }
    return 0;
}
