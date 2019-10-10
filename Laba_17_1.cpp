using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, h, l, k, j, p;
	k = 1;
	l = 1;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	for (i = 1; i < N; i++) {
		if (A[i] != A[i - 1]) {
			k++;
		};
	};
	int* B = new int[k];
	int* C = new int[k];
	j = h = A[0];
	p = 0;
	for (i = 1; i <= N; i++) {
		if (h != A[i])
		{
			B[p] = l;
			C[p] = h;
			p++;
			l = 1;
			h = A[i];
		}
		else
		{
			l++;
		};
		j = A[i];
	};
	cout << "Массив В: " << endl;
	for (i = 0; i < k; i++) {
		cout << B[i] << endl;
	};
	cout << "Массив С: " << endl;
	for (i = 0; i < k; i++) {
		cout << C[i] << endl;
	};
}