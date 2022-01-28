#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.ignore(0);

    int t;      cin >> t;
    while(t--)
    {
        int n; cin >>  n;
        int arr[n][n];
        int max=0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
                if(i==j & ((n-arr[i][j])> max) ){
                    max = n-arr[i][j];
                }
            }

        }
        cout << max << "\n";

    }

	return 0;
}
