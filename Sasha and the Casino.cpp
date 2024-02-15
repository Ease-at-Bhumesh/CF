#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int32_t main(){
    ll numTests = 1;
    cin >> numTests;
    while (numTests--)
    {
        ll winMultiplier, maxLosses, initialCoins;
        cin >> winMultiplier >> maxLosses >> initialCoins;

        ll totalLoss = 1;
        bool canWin = true;
        for (ll i = 2; i <= maxLosses; i++)
        {
            ll minBet = ((totalLoss) / (winMultiplier - 1))+1;
            totalLoss += minBet;
            if (totalLoss >= initialCoins)
            {
                canWin = false;
                break;
            }
        }

        ll remainingCoins = initialCoins - totalLoss;
        ll coinsAfterWin = winMultiplier * remainingCoins;
        if (coinsAfterWin > initialCoins && canWin)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

        return 0;
    }