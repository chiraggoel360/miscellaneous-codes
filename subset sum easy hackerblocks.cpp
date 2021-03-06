#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define F first
#define S second
#define pb push_back

using namespace std;
using namespace __gnu_pbds;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;

const ll N = 100005;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool bl = false;
        for (i = 1; i < pow(2, n); i++) {
            ll ii = i;
            j = 0; cnt = 0;
            while (ii) {
                if (ii & 1) {
                    cnt += a[j];
                }
                ii /= 2; j++;
            }
            if (cnt == 0) {
                bl = true;
            }
        }
        if (bl) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}