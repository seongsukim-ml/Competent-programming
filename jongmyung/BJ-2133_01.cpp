#include<iostream>

using namespace std;

int main() {
	int N;
	int dp[31] = {0, };

	scanf("%d", &N);
	
	if (N % 2 != 0) {
		printf("0\n");
		return 0;
	}

	dp[1] = 2;
	dp[2] = 3;

	for (int i = 3; i <= N; i++) {
		dp[i] = 2 *	dp[i - 1] + dp[i - 2];
		i++;
		dp[i] = dp[i - 1] +  dp[i - 2];
	}

	printf("%d\n", dp[N]);

	return 0;
}
