/*
教练我想打ACM！
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int inf = 0x3f3f3f3f;
const ll lnf = 0x3f3f3f3f3f3f3f3fLL;
const int maxn = 100000 + 20;

void work() {
  int n, m;
  cin >> n >> m;

  if (n == 1) {
    cout << 1;
    return;
  }
  int ans;
  if (n - m >= m) {
    ans = m + 1;
  } else {
    ans = m - 1;
  }
  cout << ans;
}
int main() {
  // freopen("data.in", "r", stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  work();
}
