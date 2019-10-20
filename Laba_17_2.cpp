using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, h, l, k, j, p, L, g;
	k = 0;
	l = 1;
	p = 0;
	j = 1;
	g = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	cout << "Введите размер серии L: ";
	cin >> L;
	h = A[0];
	if (A[N - 2] != A[N - 1]) {
		if (A[N - 1] != A[N]) {
			p++;
		};
	};
	for (i = 1; i <= N; i++) {
		if (h != A[i])
		{
			l = 1;
		}
		else
		{
			while (A[i - 1] == A[i]) {
				l++;
				i++;
			};
			k++;
		};
		h = A[i];
		if (l <= L) {
			p++;
		};
	};
	int* B = new int[k + p];
	h = A[0];
	l = 1;
	for (i = 0; i < (p + k); i++) {
		if (h != A[j])
		{
			B[i] = h;
		}
		else
		{
			g = j - 1;
			while (A[j - 1] == A[j]) {
				j++;
				l++;
			};
			if (l > L) {
				B[i] = 0;
			}
			else if (l <= L) {
				while (g <= j) {
					B[i] = A[g];
					i++;
					g++;
				};
			};
		};
		l = 1;
		h = A[j];
		j++;
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < p + k; i++) {
		cout << B[i] << endl;
	};
}
