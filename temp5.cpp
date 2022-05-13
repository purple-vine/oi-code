#include <map>
#include <cstdio>
#include <iostream>
using namespace std;

struct aba {
	int a[16];
	bool operator<(const aba otr) const{
		register int cd = 1;
		while (a[cd] == otr.a[cd]) {
			cd++;
		}
		return (a[cd] < otr.a[cd] ? 1 : 0);
	}
} c;

map<aba, int> mapp;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof b);
		cin >> s;
		int sz = s.size();
		for (int i = 1; i <= sz; i++) {
			c.a[i] = (s[i - 1] - '0');
		}
		sort(c.a + 1, c.a + sz + 1);
		mapp[c]++;
		ans += mapp[c] * (mapp[c] - 1) / 2;
	}
	cout << ans;
}
