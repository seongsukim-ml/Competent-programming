#include<iostream>

using namespace std;

int n;
int xdir[4] = {0, 1, 0, -1};
int ydir[4] = {-1, 0, 1, 0};
int years[500][500] = {0, };
int wood[500][500] = {0, };

void GreedyPanda(int prev, int yto, int xto) {
	if (prev < years[yto][xto]) {
		return;
	}
	
	years[yto][xto] = prev + 1;

	for (int i = 0; i < 4; i++) {
		int y = yto + ydir[i];
		int x = xto + xdir[i];
		if (x >= 0 && y >= 0 && x < n && y < n) {
			if (wood[yto][xto] < wood[y][x]) {
				GreedyPanda(prev + 1, y, x);
			}
		}
	}
}

int max(int a, int b) {
	return a>b?a:b;
}


int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &wood[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			GreedyPanda(0, i, j);
		}
	}

	int ret = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ret = max(ret, years[i][j]);
		}
	}

	printf("%d", ret);

	return 0;

}
