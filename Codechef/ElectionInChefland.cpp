#include <bits/stdc++.h>
using namespace std;

bool isgreater(int n){
    return n>50;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.ignore(0);

    int t;      cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        if(a>50)   cout << "A" << "\n";
        else if(b>50)   cout << "B" << "\n";
        else if(c>50)   cout << "C" << "\n";
        else            cout <<"NOTA"<<"\n";
    }

	return 0;
}
