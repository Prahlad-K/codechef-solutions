#include <iostream>

using namespace std;

int main()
{
    int T, a, b, sum;
    int arr[2000], ctr=0;
    cin>>T;

    while(T>0)
    {
        cin>>a>>b;
        sum = a+b;
        arr[ctr++]= sum;
        T--;
    }
    for(int i=0;i<ctr;i++)
        cout<<arr[i]<<"\n";
    return 0;
}
/*
// bits/stdc++.h works in linux.
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h>

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
*/
