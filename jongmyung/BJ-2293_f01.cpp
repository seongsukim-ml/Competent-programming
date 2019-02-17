#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, k;
int dp[10001][100];
vector<int> coins;

int coin1() {
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			int temp = i - coins[j];
			if (temp > 0) {
				for (int k = j; k < n; k++) {
				   dp[i][j] += dp[temp][k];
				}
			}
		}
	}

	int ret = 0;

	for (int i = 0; i < n; i++) {
		ret += dp[k][i];
	}
	return ret;
}

int main() {

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		coins.push_back(temp);
	}

	sort(coins.begin(), coins.end());

	for (int i = 0; i < n; i++) {
		dp[coins[i]][i]++;
	}

	printf("%d", coin1());

	return 0;
}
