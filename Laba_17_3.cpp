using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, h, l, k, j, p, K, g, gp, pp;
	k = 0;
	p = 0;
	j = 1;
	g = 0;
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
	h = A[0];
	for (i = 1; i <= N; i++) {
		if (h != A[i])
		{
			k++;
		}
		else
		{
			l = i - 1;
			while (A[i - 1] == A[i]) {
				i++;
				j++;
			};
			k++;
		};
		if (k == K) {
			g = l;
			p = j;
		};
		h = A[i];
	};
	gp = l;
	pp = j;
	h = 1;
	while (i < g) {
		B[i] = A[i];
		i++;
	};
	while (h <= pp) {
		B[i] = A[gp];
		gp++;
		i++;
		h++;
	};
	while (i < gp) {
		B[i] = A[i + pp];
		i++;
	};
	while (i < N) {
		B[i] = A[g];
		i++;
		g++;
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < N; i++) {
		cout << B[i] << endl;
	};
}