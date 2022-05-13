#include <cstdio>
using namespace std;
int a, p, b;
int qpow(int a, int b, int p){
	int ans = 1;
	for(; b; b >>= 1) {if(b & 1) ans = 1ll * ans * a % p; a = 1ll * a * a % p;}
	return ans;
}
int main(){
	scanf("%d %d %d", &p, &a, &b);
	for(int i = 0; i <= p; i++){
		if(qpow(a, i, p) == b % p) {
			printf("%d\n", i);
			return 0;
		}
	}
	puts("no solution");
} 
