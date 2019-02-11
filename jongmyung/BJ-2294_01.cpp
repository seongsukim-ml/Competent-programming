#include<iostream>

using namespace std;

int min(int a, int b) {
	return a>b?b:a;
}

int main() {
	int n, k;
	int dp[10001] = {0, };
	int coins[100];

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &coins[i]);
		if (coins[i] <= 10000) {
			dp[coins[i]] = 1;
		}
	}

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			if (coins[j] < i && dp[i - coins[j]] != 0) {
				if (dp[i] == 0) {
					dp[i] = dp[i - coins[j]] + 1;
				} else {
					dp[i] = min(dp[i], dp[i - coins[j]] + 1);
				}		
			}
		}
	}

	int ret = dp[k];

	if (dp[k] != 0) {
		printf("%d", dp[k]);
	} else {
		printf("-1");
	}

	return 0;
}
