#include<iostream>
#include<vector>

using namespace std;

int C;
long long dp[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5};

long long Waveform(int n) {
	if (dp[n] != 0) {
		return dp[n];
	}
	return dp[n] = Waveform(n - 1) + Waveform(n - 5);
}

int main() {
	
	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		int n;
		scanf("%d", &n);
		printf("%ld\n", Waveform(n));
	}
	return 0;
}
