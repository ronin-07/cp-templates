#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pld;

typedef vector<int> vi;
typedef vector<ld> vld;
typedef vector<ll> vll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<vi> vvi;

template<class T> using pq = priority_queue<T>;
template<class T> using minpq = priority_queue<T, vector<T>, greater<T>>;

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

#define iter(a, b, c) for (int a = (b); (a) < (c); (a)++)
#define riter(a, b, c) for (int a = (b); (a) >= (c); (a)--)

#define all(c) c.begin(),c.end()
#define sz(x) ((int)(x).size())
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define fillv(v) for(auto &i:v) cin>>i;

#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))

#define g(tc) cout<<"Case #"<<tc<<": "

#ifdef LOCAL
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001;

void solve(int t) {
	int n; cin >> n;
	vi v(n);
	fillv(v)
	
}

int main()
{
#ifdef LOCAL
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	// solve(0);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve(i);}

#ifdef LOCAL
	fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}
