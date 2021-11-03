#include <iostream>

using namespace std;


void AlternateSplit(int* A, int n,int *&B,int *&C) {
	int c = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			*(C + c) = *(A + i);
			c++;
		}
		else {
			*(B + b) = *(A + i);
			b++;
		}
	}
	delete A;

	A = NULL;
}
int main() {

	int n;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int* B=new int [(n+1)/2], * C=new int [n/2];
	AlternateSplit(A, n, B, C);
	for (int i = 0; i < (n+1) / 2; i++) {
		cout << B[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		cout << C[i] << " ";
	}
	delete B; delete C;
	B = NULL;
	C = NULL;

}
