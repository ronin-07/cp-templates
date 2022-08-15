class SEGtree {
// min segment tree| point update | range query
public:
	vector<int> seg;
	SEGtree(int n) {
		seg.resize(4 * n + 1);
	}
	void build(vector<int>& arr, int low, int high, int ind = 0) {
		if (low == high) {
			seg[ind] = arr[low];
			return;
		}
		int mid = (low + high) >> 1;
		build(arr, low, mid, 2 * ind + 1);
		build(arr, mid + 1, high, 2 * ind + 2);
		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
	}
	// point update
	void update(int i, int val, int low, int high, int ind = 0) {
		if (low == high) {
			seg[ind] = val;
			return;
		}
		int mid = (low + high) >> 1;
		if (i <= mid)
			update(i, val, low, mid, 2 * ind + 1);
		else
			update(i, val, mid + 1, high, 2 * ind + 2);
		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
	}
	// range query
	int query(int l, int r, int low, int high, int ind = 0) {
		if (r < low || high < l)
			return INT_MAX;
		else if (l <= low && r >= high)
			return seg[ind];
		int mid = (low + high) >> 1;
		int lval = query(l, r, low, mid, 2 * ind + 1);
		int rval = query(l, r, mid + 1, high, 2 * ind + 2);
		return min(lval, rval);
	}
};
