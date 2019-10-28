using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, l, k, j, p, L;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	cout << "Введите размер серии L: ";
	cin >> L;
	k = 1;
	p = 0;
	for (i = 0; i < N; i++) {
		if (A[i] == A[i + 1]) {
			k++;
		}
		else {
			if (k > L) {
				k = 1;
				p++;
			}
			else {
				for (j = 0; j < k; j++) {
					p++;
				};
				k = 1;
			};
		};
	};
	int* B = new int[p];
	k = 1;
	l = 0;
	for (i = 0; i < N; i++) {
		if (A[i] == A[i + 1]) {
			k++;
		}
		else {
			if (k > L) {
				B[l] = 0;
				k = 1;
				l++;
			}
			else {
				for (j = 0; j < k; j++) {
					B[l] = A[i];
					l++;
				};
				k = 1;
			};
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < p; i++) {
		cout << B[i] << endl;
	};
}
