#include <iostream>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	int **a = new int *[n]; //pointer to n integer pointers (2D array) //*a (integer)
	int k;
	if ((n > 0 || n <= 10) & (q > 0 || q <= 10)){
		for (int i = 0; i < n; i++) {
			cin >> k;
			a[i] = new int[k];
			for (int j = 0; j < k; j++){
				cin >> a[i][j];
			}
		}
		int q1, q2;
		for (int i = 0; i < q; i++) {
			cin >> q1 >> q2;
			cout << a[q1][q2] << endl;
			}
	}
	return 0;
}
