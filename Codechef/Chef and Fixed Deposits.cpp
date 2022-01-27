#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.ignore(0);

    int t;      cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int fixed[n];
        for (int i = 0; i < n; i++)
        {
            cin >> fixed[i];
        }
        sort(fixed, fixed+n, greater<int>());
        int sum=0;
        int c=0;
        for (int i = 0; i < n; i++)
        {
            c++;
            sum += fixed[i] ;
            if(sum >= x){
                cout << c << "\n";
                break;
            }
        }
        if(sum<x){
            cout <<-1<< "\n";
        }
    }

	return 0;
}
