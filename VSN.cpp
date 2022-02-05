#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    int T,n;
    cin>>T;

    while(T>0)
    {
        double xp, yp, zp, x0, y0, z0, dx, dy, dz, xc, yc, zc, r, d, a, b, m1,m2, t1, t2;
        cin>>xp>>yp>>zp;
        cin>>x0>>y0>>z0;
        cin>>dx>>dy>>dz;
        cin>>xc>>yc>>zc;
        cin>>r;
        a = xp-xc;
        b = yc-yp;

        d = sqrt(a*a+b*b);

        if((a*a-r*r)!=0&&(a*b)!=0)
        {m1 = -1*a*b + r* sqrt(d*d-r*r);
        m1 = m1/(a*a-r*r);


        m2 = -1*a*b - r* sqrt(d*d-r*r);
        m2 = m2/(a*a-r*r);

        if(m1*dx!=dy)
        {
        t1 = (m1*xp-yp)-(m1*x0-y0);
        t1 = t1/(m1*dx-dy);
        }
        else
        {
        t1 =0;
        }

        if(m2*dx!=dy)
        {
        t2 = (m2*xp-yp)-(m2*x0-y0);
        t2 = t2/(m2*dx-dy);
        }
        else
        {
        t2 =0;
        }

        if(t1<0||t2==0)
            cout<<fixed<<setprecision(10)<<t2<<"\n";
        else if(t2<0||t1==0)
            cout<<fixed<<setprecision(10)<<t1<<"\n";
        else
            cout<<fixed<<setprecision(10)<<min(t1, t2)<<"\n";

        }
        else if((a*a-r*r)==0)
        {
            double m,t;
            m = (r*r-b*b);
            m = m/(2*a*b);

            if(m*dx!=dy)
            {
                t = (m*xp-yp)-(m*x0-y0);
                t = t/(m*dx-dy);
            }
            else
                t=0;

            cout<<fixed<<setprecision(10)<<t<<"\n";

        }
        else
        {
            if(a==0)
            {m1 = sqrt(b*b-r*r);
            m1 = m1/r;
            m2 = -1*m1;}
            else
            {m1 = sqrt(a*a-r*r);
            m1 = r/m1;
            m2 = -1*m1;
            }


        if(m1*dx!=dy)
        {
        t1 = (m1*xp-yp)-(m1*x0-y0);
        t1 = t1/(m1*dx-dy);
        }
        else
        {
        t1 =0;
        }

        if(m2*dx!=dy)
        {
        t2 = (m2*xp-yp)-(m2*x0-y0);
        t2 = t2/(m2*dx-dy);
        }
        else
        {
        t2 =0;
        }

        if(t1<0||t2==0)
            cout<<fixed<<setprecision(10)<<t2<<"\n";
        else if(t2<0||t1==0)
            cout<<fixed<<setprecision(10)<<t1<<"\n";
        else
            cout<<fixed<<setprecision(10)<<min(t1, t2)<<"\n";
        }
        T--;

    }
    return 0;
}
