int binpower(int a, int b, int m) {
	int res = 1;
	a = a % m;
	if (a == 0) return 0;
	while (b > 0) {
		if (b & 1)
			res = (1ll*res * a) % m;
		a = (1ll*a * a) % m;
		b >>= 1;
	}
	return res;
}
