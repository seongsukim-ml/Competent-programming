#include<iostream>
#include<vector>

using namespace std;

int dp[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

int IncNum(int n) {

	int ret = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 9; j > -1; j--) {
			for (int k = 0; k < j; k++) {
				dp[j] += dp[k];
				dp[j] %= 10007;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		ret += dp[i];
		ret %= 10007;
	}
	return ret;
}


int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", IncNum(n));
	return 0;

}
