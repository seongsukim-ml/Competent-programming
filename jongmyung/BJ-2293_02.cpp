#include<iostream>

using namespace std;

int main() {

	int n, k;
	int dp[10001] = { 0, };
	int coins[100] = { 0, };
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &coins[i]);
	}

	dp[0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (coins[i] <= j) {
				dp[j] += dp[j - coins[i]];
			}
		}
	}

	printf("%d", dp[k]);

	return 0;
}
