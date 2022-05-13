#include <cstdio>
using namespace std;
int n, a, b, c;
int main(){
	scanf("%d %d %d %d", &n, &a, &b, &c);
	if(a == 1 && c == n){
		printf("%lld\n", 1ll * (n + b - 1) + 2 * n - 1); 
	}
	else if(a == 1){
		printf("%lld\n", 1ll * c + 2 * n - 1);
	}
	else if(c == n){
		printf("%lld\n", 1ll * (b - a + 1) + 2 * n - 1);
	}
	else{
		printf("%lld\n", 2 * n - 1);
	}
}
