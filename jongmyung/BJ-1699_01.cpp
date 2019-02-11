#include<iostream>

using namespace std;

int min(int a, int b) {
	return a>b?b:a;
}

int main() {
	int n;
	int boundary = 316;
	int dp[100001] = {0, };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= boundary; j++) {
			if (i >= j*j) {
				dp[i] = min(dp[i], dp[i - j*j] + 1);
			} else {
				break;
			}
		}
	}
	
	printf("%d", dp[n]);

	return 0;

}
