#include <iostream>

using namespace std;

int main()
{
    int T, n, r, ctr=0;

    cin>>T>>r;
    while(T>0)
    {
        cin>>n;
      if(n%r==0)
       ctr++;

       T--;
    }
    cout<<ctr;

}
/*
// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <bits/stdc++.h>

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Read the input n, k
	int n, k;
	cin >> n >> k;

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;

		if (t % k == 0)
		{
			ans++;
		}
	}

	// Print the ans.
	cout << ans << "\n";

	return 0;
}
*/
