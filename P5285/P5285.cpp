#include <cstdio>
using namespace std;
char s[100];
namespace subtask1{
	int n; long long k;
	const int mod = 998244353;
	int qpow(int a, int b){
		int ans = 1;
		for(; b; b >>= 1) {if(b & 1) ans = 1ll * a * ans % mod; a = 1ll * a * a % mod;}
		return ans;
	}
	int main(){
		scanf("%d", &n);
		while(n--){
			scanf("%lld", &k);
			printf("%lld\n", qpow(19, k%(mod-1)));
		}
	}
}
int main(){
//	freopen("software1.in", "r", stdin);
	scanf("%s", s);
	if(s[0] == '1'){
		return subtask1::main();
	}
}

