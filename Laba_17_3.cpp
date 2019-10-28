using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, m, p, c, q, j, K;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];	
	int* B = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	cout << "Введите номер серии К: ";
	cin >> K;
	m = 1;
	p = 0;
	q = (K == 1 ? 1 : 0);
	j = 0;
	for (i = 1; i < N; i++) {
		if (A[i - 1] != A[i]) {
			m++;
			if (m == K) p = i;
			c = i;
		}
		if (m == K) q++;
	}
	for (i = 0; i < p; i++) {
		B[j] = A[i];
		j++;
	};
	for (i = c; i < N; i++) {
		B[j] = A[i];
		j++;
	};
	for (i = p + q; i < c; i++) {
		B[j] = A[i];
		j++;
	};
	for (i = p; i < p + q; i++) {
		B[j] = A[i];
		j++;
	};
	for (i = 0; i < N; i++) {
		A[i] = B[i];
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < N; i++) {
		cout << B[i] << endl;
	};
}
