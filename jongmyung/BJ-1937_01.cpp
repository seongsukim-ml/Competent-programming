#include<iostream>

using namespace std;

int n;
int dp[500][500] = {0, };
int bamboo[500][500] = {0, };
int ydir[4] = {-1, 0, 1, 0};
int xdir[4] = {0, 1, 0, -1};

int max(int a, int b) {
	return a>b?a:b;
}

int GreedyPanda(int y, int x) {
	if (dp[y][x] != 0) {
		return dp[y][x];
	}

	for (int i = 0; i < 4; i++) {
		int yto = y + ydir[i];
		int xto = x + xdir[i];
		if (xto >= 0 && yto >= 0 && xto < n && yto < n) {
			if (bamboo[yto][xto] > bamboo[y][x]) {
				dp[y][x] = max(dp[y][x], GreedyPanda(yto, xto) + 1);
			}
		}
	}

	if (dp[y][x] == 0) {
		dp[y][x] = 1;
	}

	return dp[y][x];
}

int main() {
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &bamboo[i][j]);
		}
	}

	int ret = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ret = max(ret, GreedyPanda(i, j));
		}
	}
	
	printf("%d", ret);

	return 0;
}
