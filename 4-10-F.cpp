#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <iomanip>
#include <cctype>
#include <climits>
#include <utility>
#include <memory>
#include <functional>
using namespace std;
typedef long long ll;
// typedef __int64 ll;
typedef pair<int, int> PII;
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define mp(a,b) make_pair(a,b)
#define mset(x,i) memset(x,i,sizeof(x))
#define pb(a) push_back(a)
#define fi first
#define se second
#define lch l,m,rt<<1
#define rch m+1,r,rt<<1|1
#define rep(i,x,n) for(int i=x;i<n;i++)
const int mod = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
const double eps = 1e-8;


int a[50];
int main(int argc, char const *argv[]) {
    // freopen("data.in","r",stdin);
    // freopen("data.out","w",stdout);
    int n;
    a[0] = 1, a[2] = 3, a[4] = 11;
    while(cin >> n && n != -1) {
        if(n % 2 == 1)  {
            cout << 0 << endl;
            continue;
        }
        for(int k = 6; k <= 40; k++) {
            int res = 0;
            for(int i = 0; i <= k - 4; i += 2) {
                res += 2 * a[i];
            }
            a[k] = res + 3 * a[k - 2];
        }
        cout << a[n] << endl;
    }
    return 0;
}