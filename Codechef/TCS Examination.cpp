#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.ignore(0);

    int t;      cin >> t;
    while(t--)
    {
        int dragon[3];
        int sloth[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> dragon[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> sloth[i];
        }
        int dragon_sum=0;
        dragon_sum= accumulate(dragon, dragon+3, dragon_sum);
        int sloth_sum=0;
        sloth_sum= accumulate(sloth_sum, sloth_sum+3, sloth_sum);
        if(sloth_sum >= dragon_sum){
            if(sloth_sum > dragon_sum){
                cout << "SLOTH" <<"\n";
            }
            else if(sloth_sum == dragon_sum)
            {
                for (int i = 0; i < 3; i++)
                {
                    if(sloth[i] == dragon[i]){
                        continue;
                    }
                    else if(sloth[i] > dragon[i]){
                        cout << "SLOTH" <<"\n";
                    }
                    else{
                        cout << "DRAGON" << "\n";
                    }
                }
            }
        }
        else{
            cout << "DRAGON" << "\n";
        }



	return 0;
}
