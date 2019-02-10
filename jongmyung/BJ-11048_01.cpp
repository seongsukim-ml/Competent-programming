#include<iostream>

using namespace std;

int N,M;
int dp[1001][1001];

int Max(int a, int b) {
	return a>b?a:b;
}

int MaxCandy() {
	for (int i = 2; i <= N; i++) {
		dp[i][1] += dp[i - 1][1];
	}
	for (int i = 2; i <= M; i++) {
		dp[1][i] += dp[1][i - 1];
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= M; j++) {
			dp[i][j] += Max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[N][M];
}

int main() {
	
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			int temp;
			scanf("%d", &temp);
			dp[i][j] = temp;
		}
	}
	printf("%d\n", MaxCandy());
	return 0;
}
