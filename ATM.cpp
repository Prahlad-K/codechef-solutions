#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int with;
double bal;
double ans;

cin>>with;
cin>>bal;
if(with%5==0 && with+0.5<=bal)
{ans= bal-with-0.5;
cout<<setprecision(2)<<fixed<<ans;
}
else
cout<<bal;

return 0;
}


