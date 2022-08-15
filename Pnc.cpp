// update this for max value of N
const int N = 1e5 + 1;
int fac[N], invfac[N]; // precalc fac and inverse of fac

int binpow(int a, int b) {
	a = a % MOD;
	int res = 1;
	while (b > 0) {
		if (b & 1)
			res = (1ll * res * a) % MOD;
		a = (1ll * a * a ) % MOD;
		b >>= 1;
	}
	return res % MOD;
}

int inv(int a) {
	return binpow(a, MOD - 2);
}
// pre computation
void init() {
	fac[0] = 1;
	for (int i = 1; i < N; i++) {
		fac[i] = (1ll * fac[i - 1] * i) % MOD;
	}
	invfac[N - 1] = inv(fac[N - 1]);
	for (int i = N - 2; i >= 0; i--) {
		invfac[i] = (1ll * invfac[i + 1] * (i + 1)) % MOD;
	}
}
// Combination C(n,k)
int C(int n, int k) {
	if (k > n)
		return 0;
	return 1ll * fac[n] * invfac[k] % MOD * invfac[n - k] % MOD;
}
// Permutation P(n,k)
int P(int n, int k) {
	if (k > n)
		return 0;
	return 1ll * fac[n] * invfac[n - k] % MOD;
}
