#include <iostream>
#include <cmath>
using namespace std;

int arr[100][100];
int findsum(int row, int col, int sum, int n)
{
    if(row==n)
        return sum;

    sum = sum + arr[row][col];

    return max(findsum(row+1, col, sum, n), findsum(row+1, col+1, sum, n));

}


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int T,n, ans;
    int a[1001], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<=i;j++)
            {
                cin>>arr[i][j];

            }

        }
        a[ctr++] = findsum(0, 0, 0, n);

        T--;

    }
    for(int i=0;i<ctr;i++)
        cout<<a[i]<<"\n";
    return 0;
}
